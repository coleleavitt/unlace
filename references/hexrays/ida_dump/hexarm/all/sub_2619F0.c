unsigned __int64 __fastcall sub_2619F0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rbp
  int radix; // eax
  int v7; // r8d
  int v8; // r12d
  __int64 tinfo_size; // rax
  __int64 v10; // r12
  int tinfo_property; // eax
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // rbp
  size_t v18; // r12
  size_t v19; // r13
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 module_data; // rax
  char v24; // al
  unsigned int v25; // [rsp+Ch] [rbp-45Ch]
  int v26; // [rsp+Ch] [rbp-45Ch]
  __int64 v27; // [rsp+10h] [rbp-458h]
  int v28; // [rsp+18h] [rbp-450h]
  unsigned int v29; // [rsp+18h] [rbp-450h]
  int v30; // [rsp+1Ch] [rbp-44Ch]
  char v31[1024]; // [rsp+20h] [rbp-448h] BYREF
  _BYTE v32[8]; // [rsp+420h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+428h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v5 = tag_on(v31, v32, 32);
  radix = get_radix(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12));
  v7 = 1;
  if ( radix != 16 )
    v7 = 2 * (radix == 8);
  v28 = radix;
  v8 = v7 | (32 * (unsigned __int8)is_invsign(-1, *(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12)));
  tinfo_size = get_tinfo_size(0, *a3, 0);
  v30 = tinfo_size;
  v27 = tinfo_size;
  v25 = v8 | (8 * ((*(_BYTE *)(a1 + 13) >> 1) & ((_DWORD)tinfo_size == 8)));
  v10 = sub_255DF0((__int64 *)a1, a3);
  tinfo_property = get_tinfo_property(*a3, 3);
  v12 = v25;
  v13 = v27;
  v14 = v28;
  if ( tinfo_property == 2 )
  {
    v29 = v25;
    v26 = v14;
    module_data = get_module_data((unsigned int)dword_4EB8F8);
    v24 = sub_261950((_QWORD *)a1, module_data, v30, v26);
    v12 = v29;
    v13 = v27;
    if ( !v24 )
      v12 = v29 | 8;
  }
  v15 = format_c_number(v5, &v32[-v5], v10, 0, v13, v12);
  tag_off(v5 + v15, v32, 32);
  v16 = strlen(v31);
  v17 = a2[1];
  v18 = v16;
  v19 = v16;
  if ( v17 )
  {
    --v17;
    v19 = v16 + v17;
  }
  v20 = *a2;
  if ( a2[2] < v19 + 1 )
  {
    v22 = qvector_reserve(a2, v20, v19 + 1, 1);
    *a2 = v22;
    v20 = v22;
  }
  a2[1] = v19 + 1;
  *(_BYTE *)(v20 + v19) = 0;
  memmove((void *)(v17 + *a2), v31, v18);
  return v33 - __readfsqword(0x28u);
}
