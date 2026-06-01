__int64 __fastcall sub_518200(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v3; // r12
  __int64 v6; // rax
  __int64 i; // rsi
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r12
  unsigned int v14; // r14d
  _QWORD *v15; // r15
  void *v16; // rdi
  __int64 v17; // rax
  unsigned int *v18; // r14
  _QWORD *v19; // [rsp+10h] [rbp-A8h]
  _QWORD *v20; // [rsp+18h] [rbp-A0h]
  _QWORD *v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  int v25; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v26; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-60h] BYREF
  char v28; // [rsp+5Ch] [rbp-5Ch]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+68h] [rbp-50h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v3 = a3 & 0xFFDE | 0x20;
  v31 = __readfsqword(0x28u);
  v21 = *(_QWORD **)(*(_QWORD *)a1 + 1480LL);
  v6 = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)v6 )
  {
    for ( i = *(_QWORD *)a1; ; i = *(_QWORD *)a1 )
    {
      sub_516C20(*(__int64 **)(i + 1680), a2, (unsigned int *)(*(_QWORD *)(a2 + 8) + 20 * v6 - 20), v3);
      v6 = *(unsigned int *)(a2 + 4);
      if ( !(_DWORD)v6 )
        break;
    }
  }
  v8 = *(_DWORD *)a2;
  if ( (a3 & 0x400) == 0 || (a3 & 1) != 0 )
  {
    v12 = *(_QWORD *)a1;
    v28 = 0;
    v27 = -1;
    v13 = *(_QWORD **)(v12 + 1480);
    v22 = v12;
    v24 = *(_QWORD *)(v12 + 1616);
    sub_3FD660(v13, (__int64)&v27, v8);
    v14 = v27;
    if ( v27 == -1 )
    {
LABEL_18:
      if ( (*(_BYTE *)(a2 + 20) & 0x40) != 0 )
      {
        if ( (a3 & 0x400) != 0 )
          goto LABEL_7;
      }
      else
      {
        if ( (a3 & 0x400) != 0 )
          goto LABEL_7;
        sub_69F680(v21, v8);
      }
      LODWORD(ptr) = sub_3B90A0(v21, v8);
      sub_79BCF0((int)&ptr);
      goto LABEL_7;
    }
    while ( 1 )
    {
      if ( sub_3B8910((__int64)v13, v14) )
        goto LABEL_12;
      v26 = 0;
      v15 = *(_QWORD **)(v22 + 1680);
      v30 = 0;
      ptr = nullptr;
      v20 = *(_QWORD **)(*v15 + 1616LL);
      v19 = *(_QWORD **)(*v20 + 1480LL);
      if ( (unsigned __int8)sub_6994A0(v19, &ptr, v14) )
      {
        if ( !(_QWORD)v30 )
        {
          v16 = ptr;
          if ( ptr )
            goto LABEL_17;
          goto LABEL_12;
        }
        v17 = v30 - 1;
      }
      else
      {
        v25 = sub_3B90A0(v19, v14);
        v17 = sub_79BD30(&v25, *v20, &ptr);
      }
      if ( v17 > 0 )
      {
        v18 = sub_518080(v15, &v26, ptr);
        if ( ptr )
        {
          *(_QWORD *)&v30 = 0;
          qfree(ptr);
        }
        if ( v18 && (*(_BYTE *)(v26 + 20) & 0x40) == 0 )
          sub_517300(v24, v26, v18);
        goto LABEL_12;
      }
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        v16 = ptr;
LABEL_17:
        qfree(v16);
      }
LABEL_12:
      sub_3FD7C0(v13, &v27, v8);
      v14 = v27;
      if ( v27 == -1 )
        goto LABEL_18;
    }
  }
LABEL_7:
  v9 = sub_3B90A0(v21, v8);
  v10 = *(_QWORD *)a1;
  LODWORD(ptr) = v9;
  sub_79BB90(&ptr, v10, 0, 77);
  sub_516680(a1, a2);
  if ( (a3 & 0x10) != 0 )
    sub_517D00(a1, v8);
  return 1;
}

