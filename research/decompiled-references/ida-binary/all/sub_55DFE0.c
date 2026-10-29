void __fastcall sub_55DFE0(unsigned int *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  const char *v12; // rdx
  bool v13; // cf
  const char *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // edx
  __int64 i; // rax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // [rsp-10h] [rbp-10h]

  if ( !*((_QWORD *)a1 + 13) )
    return;
  v25 = v7;
  v10 = *((_QWORD *)a1 + 19);
  if ( a2 )
  {
    if ( !v10 )
      goto LABEL_8;
    v11 = *a1;
    v12 = "skip character:'%c'";
    v13 = (unsigned int)(v11 - 32) < 0x5F;
    v14 = "skip character:%d";
  }
  else
  {
    if ( !v10 )
      goto LABEL_8;
    v11 = *a1;
    v12 = "consume character:'%c'";
    v13 = (unsigned int)(v11 - 32) < 0x5F;
    v14 = "consume character:%d";
  }
  if ( !v13 )
    v12 = v14;
  snprintf((char *)a1 + 192, 0x400u, v12, v11, a5, a6, v6, v25, v8);
  (*((void (__fastcall **)(_QWORD, __int64, unsigned int *))a1 + 19))(*((_QWORD *)a1 + 18), 1, a1 + 48);
LABEL_8:
  v15 = a1[44];
  v16 = a1[14];
  if ( v15 )
  {
    if ( *a1 == 10 )
    {
      ++a1[15];
      a1[16] = 0;
      *((_BYTE *)a1 + 188) = 1;
      a1[46] = 0;
    }
    else
    {
      if ( ((_DWORD)v16 || *a1 != 65279) && *((_BYTE *)a1 + 188) )
        ++a1[46];
      a1[16] += v15;
    }
    v16 = v15 + (unsigned int)v16;
    a1[14] = v16;
  }
  v17 = a1[41];
  for ( i = *((_QWORD *)a1 + 12) + 24LL * v17; ; i += 24 )
  {
    v19 = *(_DWORD *)(i + 20);
    if ( (unsigned int)v16 < v19 && v19 != *(_DWORD *)(i + 16) )
      break;
    v20 = a1[40];
    if ( v17 >= v20 || (++v17, a1[41] = v17, v17 >= v20) )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 17) = *((_QWORD *)a1 + 7);
        a1[19] = a1[16];
      }
      *((_QWORD *)a1 + 13) = 0;
      *((_QWORD *)a1 + 21) = 0;
      *a1 = 0;
      a1[44] = 1;
      return;
    }
    v16 = *(unsigned int *)(i + 40);
    v21 = *(_QWORD *)(i + 24);
    a1[14] = v16;
    *(_QWORD *)(a1 + 15) = v21;
  }
  if ( a2 )
  {
    *(_QWORD *)(a1 + 17) = *((_QWORD *)a1 + 7);
    a1[19] = a1[16];
  }
  v22 = a1[42];
  if ( (unsigned int)v16 < v22 || (unsigned int)v16 >= a1[43] + v22 )
  {
    v23 = *(_QWORD *)(a1 + 15);
    a1[42] = v16;
    *((_QWORD *)a1 + 13) = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned int *))a1 + 15))(
                             *((_QWORD *)a1 + 14),
                             v16,
                             v23,
                             a1 + 43);
    if ( !a1[43] )
    {
      v24 = a1[40];
      *((_QWORD *)a1 + 13) = 0;
      a1[41] = v24;
    }
  }
  sub_55D080(a1);
}
