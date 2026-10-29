__int64 __fastcall sub_F5EAF0(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  char *v40; // rsi
  _QWORD *v41; // rax
  __int64 *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128 v47; // [rsp+10h] [rbp-58h] BYREF
  char v48; // [rsp+20h] [rbp-48h]

  v8 = (__int64)a2;
  v13 = sub_EBA840(*(_QWORD *)(a1 + 40), a2, a3, a4, a5, a6);
  v14 = *(_QWORD *)(v13[9] + 48LL);
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v14 & 4) != 0 )
  {
    v40 = *(char **)(a1 + 32);
    if ( *(char **)(a1 + 8) == v40
      || (v41 = sub_EBA840(*(_QWORD *)(a1 + 40), v40, v9, v10, v11, v12),
          a2 = (char *)v15,
          sub_F5E070(v41 + 9, v15, v42, v43, v44, v45) == a3) )
    {
      a2 = (char *)(a1 + 808);
      sub_EB4570(&v47, a1 + 808, v15);
    }
  }
  result = sub_A56850(v8, (__int64)a2, v9, v10, v11, v12);
  v20 = v17;
  v21 = result;
  if ( result != v17 )
  {
    while ( 1 )
    {
      v22 = sub_F55F20(*(__int64 **)(v21 + 16), (__int64)a2, v17, v18, v19);
      v27 = sub_F3F530(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v23, v24, v25, v26);
      v32 = (__int64)v27;
      if ( (*(_BYTE *)(v21 + 12) & 1) == 0 )
        break;
      a2 = (char *)a4;
      result = (__int64)sub_EB4570(&v47, a4, (__int64)v27);
      if ( v48 )
      {
        v34 = sub_EBA840(*(_QWORD *)(a1 + 40), *(char **)(a1 + 32), v17, v18, v19, v33);
        v39 = sub_F5E070(v34 + 9, v32, v35, v36, v37, v38);
LABEL_7:
        a2 = (char *)v32;
        result = sub_F5EAF0(a1, v32, v39, a4);
      }
      v21 += 24;
      if ( v21 == v20 )
        return result;
    }
    v39 = sub_F5D7C0(v13 + 9, (__int64)v27, v28, v29, v30, v31) + a3;
    goto LABEL_7;
  }
  return result;
}

