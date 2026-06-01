__int64 __fastcall sub_483A0(__int64 *a1, __int64 *a2, unsigned int *a3)
{
  unsigned int v3; // r14d
  unsigned int *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r12
  char v12; // r15
  __int64 v13; // rbp
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  unsigned __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v6 = sub_46340((__int64)a1, 1, ".gnu_debuglink");
  if ( v6 )
  {
    v19 = 0;
    v20 = 0;
    sub_48170(a1, &v19, (__int64)v6);
    LOBYTE(v3) = (unsigned __int64)v20 > 4;
    if ( (unsigned __int64)v20 <= 4 )
      goto LABEL_3;
    v9 = v20 - 4;
    if ( a3 )
    {
      v10 = *(_DWORD *)(v19 + v20 - 4);
      if ( *(_BYTE *)(a1[20] + 509) == 2 )
        v10 = _byteswap_ulong(v10);
      *a3 = v10;
    }
    if ( a2 )
    {
      if ( a2[2] < v9 )
      {
        v18 = v9;
        *a2 = qvector_reserve(a2, *a2, v9, 1);
        v9 = v18;
      }
      v11 = 0;
      while ( 1 )
      {
        v7 = v19;
        v12 = *(_BYTE *)(v19 + v11);
        if ( !v12 )
          break;
        v13 = a2[1];
        v14 = 2;
        if ( v13 )
          v14 = v13-- + 1;
        v15 = *a2;
        if ( a2[2] < v14 )
        {
          v17 = v9;
          v16 = qvector_reserve(a2, v15, v14, 1);
          *a2 = v16;
          v9 = v17;
          v15 = v16;
        }
        a2[1] = v14;
        ++v11;
        *(_BYTE *)(v15 + v13) = v12;
        *(_BYTE *)(*a2 + v13 + 1) = 0;
        if ( v11 == v9 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      v7 = v19;
    }
    if ( v7 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v7);
    }
  }
  else
  {
    return 0;
  }
  return v3;
}

