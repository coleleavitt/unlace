__int64 __fastcall sub_1F194E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // r12
  __int64 *v11; // rbp
  int v12; // r13d
  int v13; // r14d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 result; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 *v36; // rax
  __int32 v37; // eax
  _QWORD *v38; // [rsp+0h] [rbp-78h]
  __int64 v39; // [rsp+0h] [rbp-78h]
  __int64 v40; // [rsp+18h] [rbp-60h]
  _QWORD *v41; // [rsp+18h] [rbp-60h]
  __int64 v42; // [rsp+18h] [rbp-60h]
  _QWORD *v43; // [rsp+18h] [rbp-60h]
  __int64 v44; // [rsp+18h] [rbp-60h]
  _QWORD *v45; // [rsp+18h] [rbp-60h]
  __int64 v46; // [rsp+18h] [rbp-60h]
  __int64 *v47; // [rsp+18h] [rbp-60h]
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v49; // [rsp+30h] [rbp-48h]

  v6 = *(unsigned int *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  v38 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL);
  v8 = (unsigned int)(v6 + 1);
  v9 = *(_QWORD *)(v7 + 8 * v6);
  *(_DWORD *)(a1 + 24) = v8;
  *(_OWORD *)ptr = 0;
  v49 = 0;
  if ( !(_DWORD)v9 )
  {
LABEL_8:
    result = sub_E911A0((__int64 *)ptr, v38, v7, v9, a5, a6);
    goto LABEL_9;
  }
  v10 = (_DWORD *)(a1 + 24);
  v11 = (__int64 *)(a1 + 32);
  v12 = v9;
  v13 = 0;
  while ( 2 )
  {
    v9 = (unsigned int)(v8 + 1);
    v14 = *(_QWORD *)(v7 + 8 * v8);
    *(_DWORD *)(a1 + 24) = v9;
    switch ( v14 )
    {
      case 0LL:
        ++v13;
        v40 = sub_1EE3540(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), v11, v10);
        v19 = sub_1EEDED0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v11, v10);
        sub_E90EF0((__m128i **)ptr, v38, v40, v19, SHIDWORD(v19));
        if ( v12 == v13 )
          goto LABEL_8;
        goto LABEL_6;
      case 1LL:
        v45 = *(_QWORD **)(a1 + 8);
        v31 = sub_1EE13A0((__int64)v45, *(_QWORD *)(a1 + 16), v11, v10);
        v46 = sub_1EDB980(v45, v31, v32, v33, (__int64)v45, v34);
        v35 = sub_1EEDED0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v11, v10);
        sub_E90E50((__m128i **)ptr, v38, v46, v35, SHIDWORD(v35));
        goto LABEL_5;
      case 2LL:
        v43 = *(_QWORD **)(a1 + 8);
        v26 = sub_1EE13A0((__int64)v43, *(_QWORD *)(a1 + 16), v11, v10);
        v44 = sub_1EDB980(v43, v26, v27, v28, (__int64)v43, v29);
        v30 = sub_1EEDED0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v11, v10);
        sub_E90DB0((__m128i **)ptr, v38, v44, v30, SHIDWORD(v30));
        goto LABEL_5;
      case 3LL:
        v36 = sub_1F19370(a1);
        if ( v36 )
        {
          v47 = v36;
          v37 = sub_1EE7490(a1);
          sub_E90D10((__m128i **)ptr, v38, *v47, (__int64)(v47 + 1), v37);
LABEL_5:
          if ( v12 == ++v13 )
            goto LABEL_8;
LABEL_6:
          v8 = *(unsigned int *)(a1 + 24);
          v7 = *(_QWORD *)(a1 + 32);
          continue;
        }
        result = 0;
LABEL_9:
        if ( HIDWORD(v49) )
        {
          v39 = result;
          free(ptr[1]);
          return v39;
        }
        return result;
      case 4LL:
        v15 = sub_1EE7490(a1);
        sub_E90F90((__int64)ptr, v38, v15, v16, v17, v18);
        goto LABEL_5;
      case 5LL:
        v41 = *(_QWORD **)(a1 + 8);
        v21 = sub_1EE13A0((__int64)v41, *(_QWORD *)(a1 + 16), v11, v10);
        v42 = sub_1EDB980(v41, v21, v22, v23, (__int64)v41, v24);
        v25 = sub_1EEDED0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v11, v10);
        sub_E90C80((__int64)ptr, v38, v42, v25, SHIDWORD(v25));
        goto LABEL_5;
      default:
        goto LABEL_5;
    }
  }
}
