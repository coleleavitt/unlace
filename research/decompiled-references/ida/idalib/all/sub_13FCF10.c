__int64 __fastcall sub_13FCF10(__int64 a1, _BYTE *a2, signed __int64 a3, unsigned int a4, __int64 a5)
{
  char v5; // r9
  int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // esi
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rdi
  unsigned int v20; // edx
  __int64 *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rax
  __int64 *v27; // r10
  int v28; // edi
  bool v29; // zf
  __int64 v30; // [rsp-8h] [rbp-60h]
  char v31; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v32; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v33; // [rsp+18h] [rbp-40h] BYREF

  v5 = a4;
  v9 = *(_DWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 160) += 1776LL;
  *(_DWORD *)(a1 + 336) = v9 + 1;
  v10 = *(_QWORD *)(a1 + 80);
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 88) >= v11 + 1776 && v10 )
  {
    *(_QWORD *)(a1 + 80) = v11 + 1776;
  }
  else
  {
    v31 = a4;
    v26 = sub_986170(a1 + 80, 1776, 1776, 3, a5, a4);
    v5 = v31;
    v11 = v26;
  }
  sub_FF1F40(v11, a2, a3, 0, 0, v5, 0, v9);
  *(_QWORD *)(v11 + 896) = a5;
  v32 = v11;
  sub_FEF280(v11, 1);
  v15 = *(_DWORD *)(a1 + 488);
  v16 = *(_DWORD *)(a1 + 464);
  v17 = v30;
  if ( !v15 )
  {
    v33 = nullptr;
LABEL_18:
    v15 *= 2;
    goto LABEL_19;
  }
  v18 = v32;
  v13 = v15 - 1;
  v19 = *(_QWORD *)(a1 + 472);
  v20 = v13 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
  v21 = (__int64 *)(v19 + 16LL * v20);
  v22 = *v21;
  if ( *v21 == v32 )
  {
LABEL_6:
    v23 = v21 + 1;
    goto LABEL_7;
  }
  v14 = 1;
  v27 = nullptr;
  if ( v22 != -4096 )
  {
    while ( 1 )
    {
      if ( !v27 && v22 == -8192 )
        v27 = v21;
      v20 = v13 & (v14 + v20);
      v21 = (__int64 *)(v19 + 16LL * v20);
      v22 = *v21;
      if ( v32 == *v21 )
        goto LABEL_6;
      if ( v22 == -4096 )
      {
        if ( v27 )
          v21 = v27;
        break;
      }
      v14 = (unsigned int)(v14 + 1);
    }
  }
  v28 = *(_DWORD *)(a1 + 480);
  v12 = 3 * v15;
  v33 = v21;
  v17 = (unsigned int)(v28 + 1);
  if ( 4 * (int)v17 >= (unsigned int)v12 )
    goto LABEL_18;
  v12 = v15 - *(_DWORD *)(a1 + 484) - (unsigned int)v17;
  if ( (unsigned int)v12 <= v15 >> 3 )
  {
LABEL_19:
    sub_13FCA40((__int64 *)(a1 + 472), v15, v17, v12, v13, v14);
    sub_13F4710((__int64 *)(a1 + 472), (__int64 *)&v32, &v33);
    v18 = v32;
    LODWORD(v17) = *(_DWORD *)(a1 + 480) + 1;
    v21 = v33;
  }
  v29 = *v21 == -4096;
  *(_DWORD *)(a1 + 480) = v17;
  if ( !v29 )
    --*(_DWORD *)(a1 + 484);
  *v21 = v18;
  v23 = v21 + 1;
  v18 = v32;
  *v23 = 0;
LABEL_7:
  *v23 = v16;
  v24 = *(unsigned int *)(a1 + 312);
  if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 316) )
  {
    sub_2237220(a1 + 304, a1 + 320, v24 + 1, 8);
    v24 = *(unsigned int *)(a1 + 312);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 304) + 8 * v24) = v18;
  result = v32;
  ++*(_DWORD *)(a1 + 312);
  return result;
}
