void __fastcall sub_1739190(__int64 *a1, __int64 *a2)
{
  char ***v2; // r13
  bool v4; // zf
  __int64 *v5; // rdi
  char v6; // dl
  char v7; // al
  __int64 *v8; // rdi
  char v9; // al
  int v10; // eax
  __int64 v11; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  int v13; // [rsp+10h] [rbp-58h]
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  char v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]

  v2 = (char ***)(a1 + 1);
  v11 = *a1;
  sub_1737F30((__int64)&ptr, (__int64)(a1 + 1));
  v4 = *((_BYTE *)a1 + 32) == 0;
  v16 = *((_DWORD *)a1 + 10);
  v17 = a1[6];
  *a1 = *a2;
  if ( v4 )
  {
    if ( !*((_BYTE *)a2 + 32) )
    {
      *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 10);
      a1[6] = a2[6];
      *a2 = v11;
      v7 = v15;
      goto LABEL_17;
    }
    a1[1] = (__int64)(a1 + 3);
    a1[2] = 0x100000000LL;
    if ( *((_DWORD *)a2 + 4) )
      sub_1712470(v2, (char ***)a2 + 1);
    *((_BYTE *)a1 + 32) = 1;
    v6 = *((_BYTE *)a2 + 32);
  }
  else if ( *((_BYTE *)a2 + 32) )
  {
    sub_1712470(v2, (char ***)a2 + 1);
    v6 = *((_BYTE *)a2 + 32);
  }
  else
  {
    v5 = (__int64 *)a1[1];
    *((_BYTE *)a1 + 32) = 0;
    if ( v5 != a1 + 3 )
      free(v5);
    v6 = *((_BYTE *)a2 + 32);
  }
  *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 10);
  a1[6] = a2[6];
  *a2 = v11;
  v7 = v15;
  if ( v6 )
  {
    if ( !v15 )
    {
      v8 = (__int64 *)a2[1];
      *((_BYTE *)a2 + 32) = 0;
      if ( v8 != a2 + 3 )
      {
        free(v8);
        v9 = v15;
        goto LABEL_14;
      }
LABEL_23:
      *((_DWORD *)a2 + 10) = v16;
      a2[6] = v17;
      return;
    }
    sub_1712470((char ***)a2 + 1, (char ***)&ptr);
    v9 = v15;
LABEL_14:
    *((_DWORD *)a2 + 10) = v16;
    a2[6] = v17;
    if ( !v9 )
      return;
    goto LABEL_20;
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_23;
  a2[1] = (__int64)(a2 + 3);
  a2[2] = 0x100000000LL;
  if ( v13 )
  {
    sub_1712470((char ***)a2 + 1, (char ***)&ptr);
    v9 = v15;
    *((_BYTE *)a2 + 32) = 1;
    goto LABEL_14;
  }
  v10 = v16;
  *((_BYTE *)a2 + 32) = 1;
  *((_DWORD *)a2 + 10) = v10;
  a2[6] = v17;
LABEL_20:
  if ( ptr != &v14 )
    free(ptr);
}
