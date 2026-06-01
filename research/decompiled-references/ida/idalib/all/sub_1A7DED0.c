__int64 __fastcall sub_1A7DED0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 i; // rbx
  unsigned __int64 (__fastcall *v16)(__int64); // rax
  char v17[64]; // [rsp+8h] [rbp-40h] BYREF

  if ( a4 )
    *(_DWORD *)(a3 + 72) = a4;
  sub_17A2E10(a1);
  if ( *(char *)(a3 + 28) >= 0 )
  {
    v6 = 0;
    if ( *(_DWORD *)(a3 + 72) )
    {
      v16 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL);
      if ( v16 == sub_B71930 )
        v6 = *(_DWORD *)(a3 + 24);
      else
        v6 = v16(a3);
    }
    v7 = sub_B8E970(a3 + 40);
    if ( v7 )
    {
      while ( 1 )
      {
        sub_1A7D1B0(a1, v7, v6);
        if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 34 > 5
          || (*(_BYTE *)(v7 + 82) & 2) == 0
          || (unsigned __int8)sub_B7D390(v7, (__int64)v17, 0, v8) )
        {
          goto LABEL_7;
        }
        if ( *(_BYTE *)(a1 + 11060) )
        {
          v9 = *(__int64 **)(a1 + 11040);
          v10 = *(unsigned int *)(a1 + 11052);
          v11 = &v9[v10];
          if ( v9 != v11 )
          {
            v12 = *(__int64 **)(a1 + 11040);
            if ( v7 == *v9 )
              goto LABEL_19;
            while ( v11 != ++v12 )
            {
              if ( v7 == *v12 )
                goto LABEL_19;
            }
          }
          if ( (unsigned int)v10 < *(_DWORD *)(a1 + 11048) )
            break;
        }
        v12 = (__int64 *)sub_2236760(a1 + 11040, v7);
        v9 = *(__int64 **)(a1 + 11040);
        if ( *(_BYTE *)(a1 + 11060) )
          goto LABEL_19;
        v13 = &v9[*(unsigned int *)(a1 + 11048)];
LABEL_20:
        if ( v13 != v12 && (*v12 == -2 || *v12 == -1) )
        {
          while ( v13 != ++v12 )
          {
            if ( (unsigned __int64)*v12 < 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_7;
          }
          v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v7 )
            goto LABEL_26;
        }
        else
        {
LABEL_7:
          v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v7 )
            goto LABEL_26;
        }
      }
      *(_DWORD *)(a1 + 11052) = v10 + 1;
      *v11 = v7;
      v9 = *(__int64 **)(a1 + 11040);
      v12 = &v9[v10];
LABEL_19:
      v13 = &v9[*(unsigned int *)(a1 + 11052)];
      goto LABEL_20;
    }
  }
LABEL_26:
  for ( i = sub_B8E970(a3 + 40); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
    sub_B8C4D0(i, *(_QWORD *)(a1 + 248));
  return a3;
}
