void __fastcall sub_1AE9B00(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, __int64 a6)
{
  int v7; // r13d
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  void (*v16)(); // rax
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-30h]

  v7 = a3;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v21 = a6;
  v17 = sub_B8C3D0(a2, a2, a3, (__int64)a4, (__int64)a5, a6);
  a6 = v21;
  v18 = *v17;
  v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( *v17 >= v19 )
  {
    if ( v18 == v19 )
    {
LABEL_2:
      if ( (!a5 || (*a5 & 0x3C000) == 0) && (!a4 || (*a4 & 0x3C000) == 0) )
      {
        v10 = sub_B30EB0(*a1, v7, (__int64)a4, (__int64)a5, a6);
        sub_B8CC60(a2, v10, v11, v12, v13, v14);
        v15 = *(_QWORD *)(*a1 + 18368);
        if ( v15 )
        {
          v16 = *(void (**)())(*(_QWORD *)v15 + 168LL);
          if ( v16 != nullsub_448 )
            ((void (__fastcall *)(__int64, __int64, __int64))v16)(v15, a2, v10);
        }
      }
      return;
    }
    while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 292 )
    {
      v19 += 8LL;
      if ( v18 == v19 )
        goto LABEL_2;
    }
  }
  else
  {
    v20 = *v17;
    while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 292 )
    {
      v20 += 8LL;
      if ( v19 == v20 )
        goto LABEL_2;
    }
    if ( v19 == v20 )
      goto LABEL_2;
  }
}
