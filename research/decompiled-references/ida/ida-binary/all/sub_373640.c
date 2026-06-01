unsigned __int64 __fastcall sub_373640(__int64 a1, const char *a2, double a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 *v9; // rbx
  unsigned int v10; // ebp
  __int64 *v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  void (__fastcall *v17)(__int64, _QWORD, _QWORD, __int64 *); // r9
  int v18; // eax
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64); // rdx
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64); // rdx
  unsigned int v25; // ebx
  __int64 v26; // rax
  unsigned __int64 v28; // [rsp+18h] [rbp-70h]
  __int64 v29; // [rsp+20h] [rbp-68h] BYREF
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int128 v32; // [rsp+38h] [rbp-50h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  sub_2939B0(a1, a2);
  v3 = *(unsigned int *)(a1 + 280);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, v3);
  v4 = *(_QWORD *)(a1 + 280);
  v5 = *(_QWORD *)(a1 + 272);
  v6 = 5 * v4;
  v28 = v5 + 40 * v4;
  if ( v5 != v28 )
  {
    v7 = *(_QWORD *)(a1 + 272);
    while ( 1 )
    {
      v8 = v5 + 40 * v4;
      if ( v7 >= v8 )
        goto LABEL_33;
      v9 = *(__int64 **)(v7 + 16);
      v10 = -858993459 * ((__int64)(v7 - v5) >> 3);
      v11 = &v9[*(_QWORD *)(v7 + 24)];
      if ( v11 != v9 )
        break;
LABEL_11:
      if ( byte_8CF0DC )
      {
        v18 = *(_DWORD *)(v7 + 8);
        if ( (v18 & 2) != 0 )
        {
          v19 = *(_QWORD *)a1;
          v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
          if ( v20 == interactive_graph_t__::vfunc_7 )
          {
            v21 = *(_DWORD *)(a1 + 184);
          }
          else
          {
            v21 = v20(a1);
            v19 = *(_QWORD *)a1;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v19 + 184))(a1, v21 + 1);
          a3 = 0.0;
          v3 = v10;
          v32 = 0;
          v29 = 0x18113E243LL;
          v22 = *(_QWORD *)a1;
          v30 = -1;
          v31 = 0;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v22 + 208))(a1, v10, v21, &v29);
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            a3 = qfree(v31, (const char *)v10);
          }
          v18 = *(_DWORD *)(v7 + 8);
        }
        if ( (v18 & 4) != 0 )
        {
          v23 = *(_QWORD *)a1;
          v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
          if ( v24 == interactive_graph_t__::vfunc_7 )
          {
            v25 = *(_DWORD *)(a1 + 184);
          }
          else
          {
            v25 = v24(a1);
            v23 = *(_QWORD *)a1;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v23 + 184))(a1, v25 + 1);
          a3 = 0.0;
          v3 = v25;
          v32 = 0;
          v29 = 0x18113E243LL;
          v26 = *(_QWORD *)a1;
          v30 = -1;
          v31 = 0;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v26 + 208))(a1, v25, v10, &v29);
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            a3 = qfree(v31, (const char *)v25);
          }
        }
      }
      v7 += 40LL;
      if ( v28 == v7 )
        goto LABEL_26;
      v5 = *(_QWORD *)(a1 + 272);
      if ( v7 < v5 )
        goto LABEL_33;
      v4 = *(_QWORD *)(a1 + 280);
    }
    while ( 1 )
    {
      v3 = *v9;
      v12 = sub_3706B0(a1 + 272, *v9);
      if ( !v12 )
        goto LABEL_31;
      v15 = *(_QWORD *)a1;
      v16 = *(_QWORD *)(a1 + 272);
      v3 = 0x18113E243LL;
      v29 = 0x18113E243LL;
      v30 = -1;
      v31 = 0;
      v32 = 0;
      v17 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v15 + 208);
      if ( (unsigned __int64)v12 < v16 )
        break;
      v15 = v16 + 40LL * *(_QWORD *)(a1 + 280);
      if ( (unsigned __int64)v12 >= v15 )
        break;
      v3 = v10;
      v17(a1, v10, -858993459 * (unsigned int)((__int64)((__int64)v12 - v16) >> 3), &v29);
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        a3 = qfree(v31, (const char *)v10);
      }
      if ( ++v9 == v11 )
        goto LABEL_11;
    }
    if ( !under_debugger )
    {
      interr(40329, 0x18113E243LL, v15, v16, a3);
LABEL_31:
      if ( !under_debugger )
      {
        interr(40326, v3, v13, v14, a3);
LABEL_33:
        if ( !under_debugger )
          interr(40329, v3, v8, v6, a3);
      }
    }
    BUG();
  }
LABEL_26:
  *(_BYTE *)(a1 + 336) = 0;
  return v33 - __readfsqword(0x28u);
}
