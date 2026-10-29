__int64 __fastcall sub_3A5FA0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  const char *v4; // rsi
  unsigned int tinfo_details; // r14d
  char v6; // al
  unsigned __int8 v7; // dl
  char v8; // dh
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h]
  __int64 vars10; // [rsp+18h] [rbp+10h]
  __int128 vars18; // [rsp+20h] [rbp+18h]
  int vars28; // [rsp+30h] [rbp+28h]
  char vars2C; // [rsp+34h] [rbp+2Ch]
  unsigned __int64 vars30; // [rsp+38h] [rbp+30h]

  vars30 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = (_BYTE *)(&qword_28 + 5);
  v18 = 0;
  vars10 = 0;
  vars28 = 0;
  vars2C = 0x80;
  vars0 = 0;
  vars18 = 0;
  tinfo_details = get_tinfo_details(v3, 45, &v18);
  if ( !(_BYTE)tinfo_details )
    goto LABEL_17;
  v6 = vars2C;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  v7 = v6 & 0x60;
  if ( (v6 & 0x60) == 0x20 )
  {
    *(_WORD *)(a1 + 24) = 4;
  }
  else
  {
    if ( v7 > 0x20u )
    {
      if ( (v6 & 0x40) == 0 )
        goto LABEL_9;
      *(_WORD *)(a1 + 24) = 1;
      if ( v7 != 64 )
        goto LABEL_9;
    }
    else
    {
      v8 = BYTE1(vars28);
      if ( (vars28 & 0x200) != 0 )
      {
        *(_WORD *)(a1 + 24) = 3;
      }
      else if ( (vars28 & 0x100) != 0 )
      {
        *(_WORD *)(a1 + 24) = 2;
      }
      if ( (v8 & 4) == 0 )
        goto LABEL_9;
    }
    v4 = (_BYTE *)(&dword_0 + 1);
    *(_WORD *)(a1 + 26) = 1;
  }
LABEL_9:
  if ( (v6 & 0x10) != 0 )
    *(_WORD *)(a1 + 26) |= 2u;
  v9 = v6 & 7;
  if ( v9 )
  {
    if ( (_BYTE)v9 == 3 )
    {
      *(_DWORD *)(a1 + 56) = 3;
    }
    else if ( 1 << (v9 - 1) > 4 )
    {
      if ( (_BYTE)v9 == 4 )
        *(_DWORD *)(a1 + 56) = 4;
    }
    else if ( (_BYTE)v9 == 1 )
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    else if ( (_BYTE)v9 == 2 )
    {
      *(_DWORD *)(a1 + 56) = 2;
    }
  }
LABEL_17:
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree(vars10, v4);
  }
  v10 = v18;
  if ( v18 )
  {
    v11 = vars0;
    if ( (_QWORD)vars0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = (__int64 *)(v10 + v12);
        v15 = *(_QWORD *)(v10 + v12 + 24);
        if ( v15 )
        {
          v14[4] = 0;
          qfree(v15, v4);
        }
        v16 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v16, v4);
        }
        ++v13;
        v10 = v18;
        v12 += 56;
      }
      while ( v11 != v13 );
    }
    *(_QWORD *)&vars0 = 0;
    qfree(v10, v4);
  }
  return tinfo_details;
}
