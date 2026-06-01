__int64 __fastcall sub_1ED8E00(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // r9
  _QWORD *v13; // rax
  size_t v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // esi
  bool v22; // zf
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v26; // [rsp+28h] [rbp-2A0h] BYREF
  _QWORD *v27; // [rsp+30h] [rbp-298h] BYREF
  _QWORD *v28; // [rsp+38h] [rbp-290h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-288h] BYREF
  __int64 v30; // [rsp+50h] [rbp-278h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-270h]
  _QWORD *v32; // [rsp+60h] [rbp-268h] BYREF
  char v33; // [rsp+68h] [rbp-260h]
  _QWORD *v34; // [rsp+70h] [rbp-258h] BYREF
  char v35; // [rsp+78h] [rbp-250h]
  void *ptr[2]; // [rsp+80h] [rbp-248h] BYREF
  _BYTE v37[568]; // [rsp+90h] [rbp-238h] BYREF

  v8 = *(unsigned int *)(a3 + 32);
  v9 = 8LL * *(_QWORD *)(a3 + 16);
  v29[0] = a3;
  v29[1] = v9 - v8;
  sub_1EAF7C0((__int64 *)ptr, a3, a4);
  if ( ptr[0] )
  {
    sub_1EBF0A0(a1, (_QWORD **)ptr);
    if ( ptr[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 8LL))(ptr[0]);
    v10 = 1;
    goto LABEL_5;
  }
  v30 = 0;
  ptr[0] = v37;
  ptr[1] = (void *)0x4000000000LL;
  v31 = 0;
  sub_1EAF8B0((__int64)&v32, a3);
  v10 = v33 & 1;
  if ( (v33 & 1) != 0 )
  {
    v15 = v32;
    v32 = nullptr;
    v34 = v15;
    sub_1EBF0A0(a1, &v34);
    if ( v34 )
      (*(void (__fastcall **)(_QWORD *))(*v34 + 8LL))(v34);
    goto LABEL_13;
  }
  sub_2027F10(&v34, a3, (unsigned int)v32, ptr, &v30);
  v10 = v35 & 1;
  if ( (v35 & 1) != 0 )
  {
    v16 = v34;
    v34 = nullptr;
    v28 = v16;
    sub_1EBF0A0(a1, &v28);
    if ( v28 )
      (*(void (__fastcall **)(_QWORD *))(*v28 + 8LL))(v28);
    goto LABEL_12;
  }
  if ( (_DWORD)v34 != 82 )
  {
    v10 = 1;
    v14 = j__strlen("Expected lexical block");
    sub_1EAD680(a1, "Expected lexical block", v14);
    goto LABEL_12;
  }
  v26 = a5;
  if ( !(unsigned __int8)sub_1EB0920((__int64 *)(a1 + 3720), &v26, &v27) )
  {
    v17 = v27;
    v18 = (unsigned int)(*(_DWORD *)(a1 + 3728) + 1);
    v19 = *(unsigned int *)(a1 + 3736);
    v28 = v27;
    v20 = (unsigned int)(4 * v18);
    v21 = 2 * v19;
    if ( (unsigned int)v20 < 3 * (int)v19 )
    {
      if ( (int)v19 - *(_DWORD *)(a1 + 3732) - (int)v18 > (unsigned int)v19 >> 3 )
      {
LABEL_22:
        v22 = *v17 == -4096;
        *(_DWORD *)(a1 + 3728) = v18;
        if ( !v22 )
          --*(_DWORD *)(a1 + 3732);
        v23 = v26;
        v17[1] = 0;
        v13 = v17 + 1;
        v13[1] = 0;
        *(v13 - 1) = v23;
        v13[2] = 0;
        goto LABEL_25;
      }
      v21 = v19;
    }
    sub_1ED8BF0((__int64 *)(a1 + 3720), v21, v18, v19, v20, v12);
    sub_1EB0920((__int64 *)(a1 + 3720), &v26, &v28);
    LODWORD(v18) = *(_DWORD *)(a1 + 3728) + 1;
    v17 = v28;
    goto LABEL_22;
  }
  v13 = v27 + 1;
  if ( !v27[1] )
  {
LABEL_25:
    v24 = v31 >> 3;
    v13[1] = v30;
    *v13 = a2;
    v13[2] = v24;
  }
  *(_BYTE *)(a5 + 8) |= 0x80u;
LABEL_12:
  sub_A0AE90((__int64 *)&v34);
LABEL_13:
  sub_A0AE90((__int64 *)&v32);
  if ( ptr[0] != v37 )
    free(ptr[0]);
LABEL_5:
  sub_1EAF840((__int64)v29);
  return v10;
}
