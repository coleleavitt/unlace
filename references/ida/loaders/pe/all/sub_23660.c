__int64 __fastcall sub_23660(__int64 a1, __int64 *a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // rbx
  _BOOL8 (__fastcall *v10)(__int64, _DWORD *, unsigned int, unsigned int *); // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _DWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r12d
  int i; // eax
  int v22; // r11d
  int v23; // r10d
  __int64 v24; // rax
  __int64 v25; // rsi
  int v26; // r12d
  __int64 v27; // rax
  unsigned int v28; // [rsp+Ch] [rbp-5Ch]
  int v29; // [rsp+10h] [rbp-58h]
  int v30; // [rsp+14h] [rbp-54h]
  int v31; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a5 )
    *a5 = 0;
  v9 = *a2;
  if ( *a2 )
    goto LABEL_4;
  v9 = operator new(0x28u);
  *a2 = v9;
  v16 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v9 = &off_32828;
  *(_QWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 32) = 0;
  *(_OWORD *)(v9 + 16) = 0;
  v17 = *(_QWORD *)(v16 + 24);
  if ( (int)v17 > 0 )
  {
    v18 = *(_QWORD *)(v16 + 16);
    v19 = v18 + 44LL * (unsigned int)(v17 - 1) + 44;
    while ( *(_DWORD *)(v18 + 40) != 2 )
    {
      v18 += 44;
      if ( v18 == v19 )
        goto LABEL_25;
    }
    if ( v18 )
    {
      v28 = *(_DWORD *)(v18 + 4);
      if ( v28 > 1 )
      {
        v20 = 1;
        for ( i = sub_231F0(v16, 1u, &v31, 2u); ; i = sub_231F0(*(_QWORD *)(a1 + 8), v20, &v31, 2u) )
        {
          v22 = v31;
          v23 = i;
          if ( !v31 )
            break;
          v24 = *(_QWORD *)(v9 + 16);
          v25 = *(_QWORD *)(v9 + 8);
          v26 = v20 | 0x70000000;
          if ( *(_QWORD *)(v9 + 24) < (unsigned __int64)(v24 + 1) )
          {
            v30 = v23;
            v29 = v31;
            v27 = qvector_reserve();
            v23 = v30;
            v22 = v29;
            *(_QWORD *)(v9 + 8) = v27;
            v25 = v27;
            v24 = *(_QWORD *)(v9 + 16);
          }
          *(_DWORD *)(v25 + 4 * v24) = v26;
          v20 = v22 + v23;
          ++*(_QWORD *)(v9 + 16);
          if ( v22 + v23 >= v28 )
            break;
        }
LABEL_4:
        v10 = *(_BOOL8 (__fastcall **)(__int64, _DWORD *, unsigned int, unsigned int *))(*(_QWORD *)v9 + 16LL);
        goto LABEL_5;
      }
    }
  }
LABEL_25:
  v10 = sub_21320;
LABEL_5:
  if ( v10 != sub_21320 )
    return v10(v9, a3, a4, a5);
  v11 = *(unsigned int *)(v9 + 32);
  v12 = *(_QWORD *)(v9 + 16);
  if ( v12 - v11 < (unsigned __int64)a4 )
    a4 = v12 - v11;
  if ( a4 )
  {
    v13 = a3 + 1;
    ++*(_DWORD *)(v9 + 32);
    *a3 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 4 * v11);
    if ( a4 != 1 )
    {
      do
      {
        v14 = *(unsigned int *)(v9 + 32);
        ++v13;
        *(_DWORD *)(v9 + 32) = v14 + 1;
        *(v13 - 1) = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 4 * v14);
      }
      while ( &a3[a4] != v13 );
    }
  }
  *a5 = a4;
  return a4 == 0;
}
