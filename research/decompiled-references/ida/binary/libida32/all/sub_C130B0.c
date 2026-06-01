__int64 __fastcall sub_C130B0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v10; // rbx
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned int i; // ecx
  __int64 result; // rax
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // [rsp+0h] [rbp-D8h]
  __int64 v28; // [rsp+0h] [rbp-D8h]
  unsigned int v29; // [rsp+Ch] [rbp-CCh]
  _QWORD v30[3]; // [rsp+10h] [rbp-C8h] BYREF
  char v31; // [rsp+28h] [rbp-B0h]
  __int64 v32; // [rsp+38h] [rbp-A0h]
  void *ptr; // [rsp+40h] [rbp-98h]
  __int64 v34; // [rsp+48h] [rbp-90h]
  _BYTE v35[136]; // [rsp+50h] [rbp-88h] BYREF

  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_DWORD *)(v10 + 56);
  v12 = *(_DWORD *)(v10 + 128);
  v13 = *(_QWORD *)(v10 + 48);
  for ( i = *(_DWORD *)(v10 + 60); v12 > v11; v12 = *(_DWORD *)(v10 + 128) )
    v10 = *(_QWORD *)(v10 + 16);
  if ( v12 != v11 )
    goto LABEL_4;
  v16 = a2;
  if ( v13 )
  {
    v17 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
    if ( v17 == 255 )
    {
      v29 = i;
      v17 = sub_B50B40(a2);
      i = v29;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(v13 + 120) + 8LL * v17);
  }
  v18 = *(_QWORD *)(v10 + 88);
  if ( !v18 )
    goto LABEL_4;
  v19 = v10 + 80;
  do
  {
    while ( v16 <= *(_QWORD *)(v18 + 32) && (v16 != *(_QWORD *)(v18 + 32) || *(_DWORD *)(v18 + 40) >= i) )
    {
      v19 = v18;
      v18 = *(_QWORD *)(v18 + 16);
      if ( !v18 )
        goto LABEL_17;
    }
    v18 = *(_QWORD *)(v18 + 24);
  }
  while ( v18 );
LABEL_17:
  if ( v10 + 80 != v19 && v16 == *(_QWORD *)(v19 + 32) && *(_DWORD *)(v19 + 40) == i )
  {
    v20 = *(_QWORD **)(a1 + 16);
    memset(v30, 0, sizeof(v30));
    v31 |= 1u;
    ptr = v35;
    v34 = 0x800000000LL;
    v32 = 0;
    v35[65] = 0;
    sub_C00890((__int64)v30, v20, v19 + 48);
    v21 = *(_QWORD *)(a2 + 48);
    v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
    v23 = (unsigned int)*(unsigned __int8 *)(v22 + 16) - 43;
    if ( (unsigned int)v23 <= 1
      || (v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
          (unsigned int)v26 <= 1)
      && (v28 = *(_QWORD *)(a2 + 48),
          v22 = sub_F3F310(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL), v20, v21, v26),
          v21 = v28,
          v22) )
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v22 + 32);
        if ( (*(_BYTE *)(v22 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
          v24 = (unsigned int)*(unsigned __int8 *)(v22 + 16) - 43;
          if ( (unsigned int)v24 <= 1 )
            break;
          v25 = sub_F3F310(v22, v20, v24, v23);
          v21 = *(_QWORD *)(v25 + 32);
          if ( (*(_BYTE *)(v25 + 18) & 0x10) == 0 )
            goto LABEL_24;
        }
      }
    }
LABEL_24:
    result = sub_C12830(a1, a3, v21, (__int64)v30, a4, a5);
    if ( ptr != v35 )
    {
      v27 = result;
      free(ptr);
      return v27;
    }
  }
  else
  {
LABEL_4:
    sub_E0FED0(a1, a3, 108, 0);
    return 0;
  }
  return result;
}

