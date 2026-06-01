__int64 __fastcall sub_40F240(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, char a5, int a6)
{
  unsigned int i; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rbx
  int *v21; // rcx
  unsigned int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // r15
  unsigned int v27; // eax
  unsigned int v28; // r15d
  __int64 v30; // rax
  unsigned int j; // r13d
  __int64 *v32; // r14
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v36; // [rsp+0h] [rbp-C8h]
  int v37[2]; // [rsp+8h] [rbp-C0h]
  unsigned int v38; // [rsp+14h] [rbp-B4h]
  __int64 v39; // [rsp+18h] [rbp-B0h]
  int v40[2]; // [rsp+28h] [rbp-A0h]
  __int64 v43; // [rsp+48h] [rbp-80h] BYREF
  int v44[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v45; // [rsp+58h] [rbp-70h]
  int v46[2]; // [rsp+60h] [rbp-68h] BYREF
  int v47[2]; // [rsp+68h] [rbp-60h] BYREF
  int v48[2]; // [rsp+70h] [rbp-58h] BYREF
  int v49[2]; // [rsp+78h] [rbp-50h]
  int v50[2]; // [rsp+80h] [rbp-48h] BYREF
  int v51[2]; // [rsp+88h] [rbp-40h]

  if ( a4 <= 0xFFFE )
  {
    for ( i = *(_DWORD *)(a1 + 208); a4 >= i; i = *(_DWORD *)(a1 + 208) )
    {
      v10 = *(_QWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 208) = i + 1;
      sub_428A80(v10);
    }
  }
  *(_QWORD *)v44 = *(_QWORD *)(a1 + 8);
  sub_407990(a3, a2, (__int64)a3, a4, a5, a6);
  v11 = a3[2];
  v12 = *(_QWORD *)(a2 + 24);
  v45 = 0;
  sub_404A20(a1, v12, v11, (__int64)v44);
  v38 = 0;
  v39 = v45;
  if ( v45 )
  {
    v15 = v45;
    if ( *(_DWORD *)(v45 - 4) )
    {
      while ( 1 )
      {
        *(_QWORD *)v37 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)v40 = v15 + 8LL * v38;
        v16 = *(_QWORD *)(**(_QWORD **)v40 + 40LL);
        v36 = *(_QWORD *)(**(_QWORD **)v40 + 32LL);
        sub_407990(a3, v12, v36, v15, v13, v14);
        v20 = 0;
        v21 = v46;
        if ( *(_WORD *)(a3[2] + 4LL) == 2 && *(_BYTE *)(*(_QWORD *)(a1 + 16) + 641LL) )
        {
          v30 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)v48 = 0;
          *(_QWORD *)v49 = v30;
          *(_QWORD *)v50 = v30;
          *(_QWORD *)v51 = 0;
          *(_QWORD *)v46 = *(_QWORD *)v37;
          *(_QWORD *)v47 = 0;
          sub_40E1F0(a3, (__int64)v46, v16, (int)v46, v18, v19);
          sub_3D5800(*(std::ios_base **)(v16 + 24), v48, (__int64 *)v50);
          v43 = *(_QWORD *)v48;
          if ( *(_QWORD *)v48 )
            ++*(_DWORD *)(*(_QWORD *)v48 + 8LL);
          sub_407600((unsigned int **)v47, &v43);
          v20 = *(_QWORD *)v47;
          *(_QWORD *)v37 = *(_QWORD *)v46;
          sub_2B4F40((__int64 *)v50);
          v12 = *(_QWORD *)v49;
          sub_3FCDF0(*(__int64 *)v48, *(__int64 *)v49);
          if ( v20 )
          {
            for ( j = 0; j < *(_DWORD *)(v20 - 4); ++j )
            {
              v32 = (__int64 *)(v20 + 8LL * j);
              v33 = sub_15E1B70(*(_QWORD *)(a1 + 8));
              v34 = v33;
              if ( v33 )
                ++*(_DWORD *)(v33 + 8);
              v12 = *v32;
              if ( *v32 )
              {
                if ( (*(_DWORD *)(v12 + 8))-- == 1 )
                  sub_15D7BC0(*(_QWORD *)v37, v12);
              }
              *v32 = v34;
            }
          }
        }
        sub_407990(a3, v12, v17, (int)v21, (unsigned __int8)v18, v19);
        if ( *(_WORD *)(a3[2] + 4LL) != 2 || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 642LL) == 1 && !a5 )
          break;
        if ( v20 )
          goto LABEL_13;
LABEL_17:
        *(_QWORD *)v47 = v20;
        *(_QWORD *)v46 = *(_QWORD *)v37;
        sub_2334C0((__int64 *)v46);
        v15 = v39;
        if ( ++v38 >= *(_DWORD *)(v39 - 4) )
          return sub_2334C0((__int64 *)v44);
      }
      *(_BYTE *)(a1 + 448) = 1;
      v26 = **(_QWORD **)v40;
      if ( **(_QWORD **)v40 )
        ++*(_DWORD *)(v26 + 8);
      if ( !v20 || (v27 = *(_DWORD *)(v20 - 4), v27 == *(_DWORD *)(v20 - 8)) )
      {
        *(_QWORD *)v47 = v20;
        *(_QWORD *)v46 = *(_QWORD *)v37;
        sub_23A6F0((unsigned int **)v47);
        v20 = *(_QWORD *)v47;
        *(_QWORD *)v37 = *(_QWORD *)v46;
        v27 = *(_DWORD *)(*(_QWORD *)v47 - 4LL);
      }
      v22 = v27;
      *(_QWORD *)(v20 + 8LL * v27) = v26;
      *(_DWORD *)(v20 - 4) = v27 + 1;
LABEL_13:
      v28 = 0;
      if ( a4 > 0xFFFE )
      {
        while ( v28 < *(_DWORD *)(v20 - 4) )
        {
          v12 = *(_QWORD *)(v20 + 8LL * v28);
          sub_428900(*(_QWORD *)(a1 + 120), v12, v22, v23, v24, v25, v36);
          ++v28;
        }
      }
      else
      {
        while ( v28 < *(_DWORD *)(v20 - 4) )
        {
          v12 = *(_QWORD *)(v20 + 8LL * v28);
          sub_429BB0(*(_QWORD *)(a1 + 120), v12, a4);
          ++v28;
        }
      }
      goto LABEL_17;
    }
  }
  return sub_2334C0((__int64 *)v44);
}

