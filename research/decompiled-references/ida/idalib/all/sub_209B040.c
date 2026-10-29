__int64 __fastcall sub_209B040(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  __int64 *v5; // r12
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // r9
  __int64 v15; // rbx
  __int64 *v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 *v19; // rsi
  unsigned __int64 v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // r9
  __int64 v27; // rax
  const void *v28; // rax
  size_t v29; // rdx
  __int64 v30; // rax
  const void *v31; // rax
  size_t v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  const void *v35; // rax
  size_t v36; // rdx
  __int64 v37; // rax
  const void *v38; // rax
  size_t v39; // rdx
  __int64 v40; // rax
  __int64 *v41; // [rsp+0h] [rbp-78h]
  __int64 v42; // [rsp+0h] [rbp-78h]
  __int64 v43; // [rsp+0h] [rbp-78h]
  __int64 v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+20h] [rbp-58h]
  __int64 v48; // [rsp+20h] [rbp-58h]
  __int64 v49; // [rsp+28h] [rbp-50h]
  __m128 v50[4]; // [rsp+30h] [rbp-48h] BYREF

  result = sub_209A570(*(_QWORD *)(a1 + 8), a2);
  if ( !*(_BYTE *)(result + 160) )
  {
    v4 = result;
    v44 = a1 + 208;
    if ( *(_DWORD *)(a1 + 216) )
    {
      sub_2097C80(
        v50,
        *(__int64 **)(a1 + 208),
        (__int64 *)(*(_QWORD *)(a1 + 208) + 16LL * *(unsigned int *)(a1 + 224)),
        a1 + 208,
        0);
      v7 = v50[0].m128_u64[1];
      v5 = (__int64 *)v50[0].m128_u64[0];
    }
    else
    {
      v5 = (__int64 *)sub_2097CE0(a1 + 208);
      v7 = v6;
    }
    v8 = sub_2097CE0(v44);
    if ( v5 != (__int64 *)v8 )
    {
      while ( 1 )
      {
        v9 = v5 + 2;
        if ( (__int64 *)v7 != v5 + 2 )
        {
          v10 = v5[2];
          if ( v10 == -8192 || v10 == -4096 )
          {
            v11 = v5 + 4;
            do
            {
              v9 = v11;
              if ( (__int64 *)v7 == v11 )
                break;
              v12 = *v11;
              v11 += 2;
            }
            while ( v12 == -4096 || v12 == -8192 );
          }
        }
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5[1] + 96LL))(v5[1])
          || (v13 = sub_2094330(*(_QWORD **)(v4 + 112), *(_QWORD *)(v4 + 112) + 8LL * *(unsigned int *)(v4 + 120), v5),
              v14 != v13) )
        {
          if ( v9 == (__int64 *)v8 )
            break;
        }
        else
        {
          if ( dword_2CFD4D8 > 3 )
          {
            v45 = v5[1];
            v34 = sub_221A480(a3);
            v42 = sub_995540(v34, " -- '");
            v35 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
            v37 = sub_9954E0(v42, v35, v36);
            sub_995540(v37, "' is not preserving '");
            v43 = sub_221A480(a3);
            v38 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
            v40 = sub_9954E0(v43, v38, v39);
            sub_995540(v40, "'\n");
          }
          *v5 = -8192;
          --*(_DWORD *)(a1 + 216);
          ++*(_DWORD *)(a1 + 220);
          if ( v9 == (__int64 *)v8 )
            break;
        }
        v5 = v9;
      }
    }
    v41 = (__int64 *)(a1 + 160);
    do
    {
      v15 = *v41;
      if ( *v41 )
      {
        if ( *(_DWORD *)(v15 + 8) )
        {
          sub_2097C80(v50, *(__int64 **)v15, (__int64 *)(*(_QWORD *)v15 + 16LL * *(unsigned int *)(v15 + 16)), *v41, 0);
          v18 = v50[0].m128_u64[1];
          v16 = (__int64 *)v50[0].m128_u64[0];
        }
        else
        {
          v16 = (__int64 *)sub_2097CE0(*v41);
          v18 = v17;
        }
        v19 = (__int64 *)(*(_QWORD *)v15 + 16LL * *(unsigned int *)(v15 + 16));
        sub_2097C80(v50, v19, v19, v15, 1);
        v20 = v50[0].m128_u64[0];
        if ( v16 != (__int64 *)v50[0].m128_u64[0] )
        {
          v21 = v16 + 2;
          if ( v16 + 2 != (__int64 *)v18 )
          {
LABEL_27:
            v22 = v16[2];
            if ( v22 == -4096 || v22 == -8192 )
            {
              v23 = v16 + 4;
              do
              {
                v21 = v23;
                if ( v23 == (__int64 *)v18 )
                  goto LABEL_36;
                v24 = *v23;
                v23 += 2;
              }
              while ( v24 == -8192 || v24 == -4096 );
            }
            if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16[1] + 96LL))(v16[1]) )
            {
LABEL_37:
              v25 = sub_2094330(*(_QWORD **)(v4 + 112), *(_QWORD *)(v4 + 112) + 8LL * *(unsigned int *)(v4 + 120), v16);
              if ( v26 == v25 )
              {
                if ( dword_2CFD4D8 > 3 )
                {
                  v49 = v16[1];
                  v27 = sub_221A480(a3);
                  v47 = sub_995540(v27, " -- '");
                  v28 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
                  v30 = sub_9954E0(v47, v28, v29);
                  sub_995540(v30, "' is not preserving '");
                  v48 = sub_221A480(a3);
                  v31 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
                  v33 = sub_9954E0(v48, v31, v32);
                  sub_995540(v33, "'\n");
                }
                *v16 = -8192;
                --*(_DWORD *)(v15 + 8);
                ++*(_DWORD *)(v15 + 12);
              }
            }
            goto LABEL_34;
          }
          while ( 1 )
          {
LABEL_36:
            v21 = (__int64 *)v18;
            if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16[1] + 96LL))(v16[1]) )
              goto LABEL_37;
LABEL_34:
            if ( v21 == (__int64 *)v20 )
              break;
            v16 = v21;
            v21 += 2;
            if ( v21 != (__int64 *)v18 )
              goto LABEL_27;
          }
        }
      }
      result = (__int64)++v41;
    }
    while ( (__int64 *)v44 != v41 );
  }
  return result;
}
