__int64 __fastcall sub_33820(__int64 a1, __int64 a2, double a3, double a4, double a5)
{
  __int64 (__fastcall **v6)(__int64, void **); // rax
  __int64 (__fastcall *v8)(__int64, unsigned int *); // rax
  unsigned int *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  _BOOL4 v21; // ebx
  __int64 v22; // rax
  __int64 (__fastcall **v23)(__int64, void **); // rax
  __int64 (__fastcall *v24)(__int64, unsigned int *); // rax
  unsigned int *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rdi
  __int64 (*v29)(void); // rax
  int v30; // eax
  __int64 (__fastcall *v31)(__int64, void **); // rax
  unsigned int *v32; // rax
  unsigned int v33; // eax
  __int64 (__fastcall **v34)(__int64, void **); // rax
  __int64 (__fastcall *v35)(__int64, unsigned int *); // rax
  unsigned int *v36; // rax
  _QWORD *v37; // rdi
  __int64 (*v38)(void); // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, __int64 *); // rax
  const char **v42; // rax
  const char *v43; // r15
  size_t v44; // rax
  size_t v45; // r14
  size_t v46; // rdx
  size_t v47; // [rsp+8h] [rbp-70h]
  unsigned int v48; // [rsp+14h] [rbp-64h] BYREF
  unsigned int v49; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  __int128 v52; // [rsp+28h] [rbp-50h]
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v6 = *(__int64 (__fastcall ***)(__int64, void **))a2;
  v53 = __readfsqword(0x28u);
  v8 = (__int64 (__fastcall *)(__int64, unsigned int *))v6[22];
  if ( v8 == sub_2DEA0 )
  {
    v9 = (unsigned int *)sub_2CEC0(*(__int64 **)(a2 + 16), 0x80000, 0x400u, 0x4000000);
    if ( v9 )
    {
      v13 = *v9;
      v48 = *v9;
      goto LABEL_4;
    }
  }
  else
  {
    result = v8(a2, &v48);
    if ( (int)result < 0 )
      return result;
  }
  v13 = v48;
LABEL_4:
  v14 = *(_QWORD *)(a1 + 128);
  v15 = a1 + 120;
  if ( v14 )
  {
    v16 = a1 + 120;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v14 + 16);
        v10 = *(_QWORD *)(v14 + 24);
        if ( *(_DWORD *)(v14 + 32) < v13 )
          break;
        v16 = v14;
        v14 = *(_QWORD *)(v14 + 16);
        if ( !v11 )
          goto LABEL_9;
      }
      v14 = *(_QWORD *)(v14 + 24);
    }
    while ( v10 );
LABEL_9:
    if ( v15 != v16 && v13 >= *(_DWORD *)(v16 + 32) )
      return 0;
  }
  v18 = sub_24E40(a1 + 112, v13, v10, v11, v12);
  v20 = v19;
  if ( v19 )
  {
    v21 = v18 || v15 == v19 || v13 < *(_DWORD *)(v19 + 32);
    v22 = operator new(0x28u);
    *(_DWORD *)(v22 + 32) = v48;
    std::_Rb_tree_insert_and_rebalance(v21, v22, v20, a1 + 120, a3, a4, a5);
    ++*(_QWORD *)(a1 + 152);
  }
  v23 = *(__int64 (__fastcall ***)(__int64, void **))a2;
  v49 = 0;
  v24 = (__int64 (__fastcall *)(__int64, unsigned int *))v23[23];
  if ( v24 == sub_2DCC0 )
  {
    v25 = (unsigned int *)sub_2CEC0(*(__int64 **)(a2 + 16), 0x100000, 0x400u, 0x4000000);
    if ( v25 )
    {
      v26 = *v25;
      v49 = v26;
      goto LABEL_21;
    }
LABEL_34:
    v26 = v49;
LABEL_21:
    if ( (unsigned int)v26 <= 0x29 )
    {
      v27 = 0x2007597F817LL;
      if ( _bittest64(&v27, v26) )
        return 0;
      if ( (_DWORD)v26 == 3 )
      {
        v28 = *(_DWORD **)(a1 + 320);
        v29 = *(__int64 (**)(void))(*(_QWORD *)v28 + 112LL);
        if ( (char *)v29 == (char *)sub_23F30 )
          v30 = v28[4];
        else
          v30 = v29();
        if ( (unsigned int)(v30 - 3) > 4 )
          return 0;
        v31 = **(__int64 (__fastcall ***)(__int64, void **))a2;
        if ( (char *)v31 != (char *)sub_2DED0 )
        {
          if ( (unsigned int)v31(a2, &dest) )
            return 0;
          v33 = (unsigned int)dest;
          goto LABEL_30;
        }
        v32 = (unsigned int *)sub_2CEC0(*(__int64 **)(a2 + 16), 1024, 0x400u, 0x4000000);
        if ( v32 )
        {
          v33 = *v32;
LABEL_30:
          *(_BYTE *)(a1 + 328) = v33 <= 0xD;
        }
        return 0;
      }
    }
    v34 = *(__int64 (__fastcall ***)(__int64, void **))a2;
    v50 = 0;
    v35 = (__int64 (__fastcall *)(__int64, unsigned int *))v34[21];
    if ( v35 == sub_2DF00 )
    {
      v36 = (unsigned int *)sub_2CEC0(*(__int64 **)(a2 + 16), 0x40000, 0x400u, 0x4000000);
      if ( !v36 )
        return 0;
      v50 = *v36;
    }
    else if ( (unsigned int)v35(a2, &v50) )
    {
      return 0;
    }
    v37 = *(_QWORD **)(a1 + 320);
    v38 = *(__int64 (**)(void))(*v37 + 104LL);
    if ( (char *)v38 == (char *)sub_23F20 )
      v39 = v37[3];
    else
      v39 = v38();
    dest = nullptr;
    v52 = 0;
    v40 = v39 + v50;
    v41 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 144LL);
    if ( v41 == sub_2D280 )
    {
      v42 = (const char **)sub_2CEC0(*(__int64 **)(a2 + 16), 0x10000000, 0x10000000u, 0x10000000);
      if ( v42 )
      {
        v43 = *v42;
        if ( *v42 && (v44 = strlen(*v42), (v45 = v44) != 0) )
        {
          v46 = v44 + 1;
          if ( *((_QWORD *)&v52 + 1) < v44 + 1 )
          {
            v47 = v44 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v46, 1);
            v46 = v47;
          }
          *(_QWORD *)&v52 = v46;
          memmove(dest, v43, v45);
          *((_BYTE *)dest + v45) = 0;
        }
        else
        {
          *(_QWORD *)&v52 = 0;
        }
      }
    }
    else
    {
      v41(a2, (__int64 *)&dest);
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, void **))(*(_QWORD *)a1 + 48LL))(a1, a2, v49, v40, &dest);
    if ( dest )
    {
      *(_QWORD *)&v52 = 0;
      qfree(dest);
    }
    return 0;
  }
  result = v24(a2, &v49);
  if ( (int)result >= 0 )
    goto LABEL_34;
  return result;
}
