/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51644
// Address: 0x0000000000051644

//----- (0000000000051644) ----------------------------------------------------
void __fastcall sub_51644(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // x23
  int v9; // w22
  char *v13; // x0
  const char *v14; // x2
  int v15; // w1
  __int64 v16; // x8
  __int64 v17; // x25
  __int64 v18; // x22
  const char *v19; // x24
  __int64 v20; // x0
  unsigned __int64 v21; // x22
  unsigned __int64 v22; // x8
  char *v23; // x0
  __int64 v24; // x19
  int v25; // w20
  void (__fastcall *v26)(__int64, __int64, unsigned __int64, _QWORD, __int64); // x21
  __int64 v27; // x0
  void *v29; // x0
  char v30; // [xsp+0h] [xbp-90h]
  void *ptr; // [xsp+8h] [xbp-88h] BYREF
  unsigned __int64 v32; // [xsp+10h] [xbp-80h]
  __int64 v33; // [xsp+18h] [xbp-78h]
  void *v34; // [xsp+20h] [xbp-70h] BYREF
  __int64 v35; // [xsp+28h] [xbp-68h]
  __int64 v36; // [xsp+30h] [xbp-60h]
  __int64 v37; // [xsp+38h] [xbp-58h]
  int8x16x2_t v38; // 0:q0.32

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_BYTE *)(a1 + 72) )
  {
    if ( !under_debugger )
      interr(20100);
    __break(1u);
    if ( ptr )
    {
      v32 = 0;
      qfree(ptr);
      ptr = nullptr;
      v33 = 0;
      v29 = v34;
      if ( !v34 )
LABEL_38:
        Unwind_Resume((_QWORD *)a1, a2, a3, a4, a5, a6, a7, a8, v30);
    }
    else
    {
      v29 = v34;
      if ( !v34 )
        goto LABEL_38;
    }
    v35 = 0;
    qfree(v29);
    v34 = nullptr;
    v36 = 0;
    goto LABEL_38;
  }
  v8 = *(_QWORD *)(a3 + 32);
  v34 = nullptr;
  v35 = 0;
  v36 = 0;
  v9 = *(_DWORD *)a3;
  v13 = sub_56550(a1, *(_DWORD *)a3);
  sub_39140(&ptr, v13);
  if ( v32 > 1 || (sub_3C748((__int64)&ptr, "%08X", v9), v32) )
    v14 = (const char *)ptr;
  else
    v14 = &byte_F154B;
  sub_3C748((__int64)&v34, "Size of %s", v14);
  if ( ptr )
  {
    v32 = 0;
    qfree(ptr);
    ptr = nullptr;
    v33 = 0;
  }
  v16 = *(_QWORD *)(a1 + 64);
  v17 = *(_QWORD *)(a3 + 8);
  v18 = *(_QWORD *)(v16 + 472);
  if ( v35 )
    v19 = (const char *)v34;
  else
    v19 = &byte_F154B;
  if ( v17 == -1 )
    v17 = qlseek(*(_QWORD *)(v16 + 472), 0, 1);
  v20 = qlsize(v18, v15, v38);
  v21 = v20 - v17;
  if ( ((v20 - v17) | v17) < 0 )
  {
    v21 = 0;
  }
  else if ( v21 >= v8 )
  {
    v21 = v8;
    goto LABEL_17;
  }
  if ( (unsigned int)sub_5C340(
                       1,
                       (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       v19,
                       v8,
                       v21,
                       ". Do you want to continue with the new value?") != 1 )
    sub_5BDE0(0);
LABEL_17:
  v22 = *(_QWORD *)(a2 + 8);
  if ( v22 >= v21 )
  {
    if ( v22 != v21 )
    {
      LOBYTE(ptr) = 0;
      sub_5BBF4((pthread_mutex_t *)a2, v21, (char *)&ptr);
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 16) >= v21 )
    {
      v23 = *(char **)a2;
    }
    else
    {
      v23 = (char *)qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v21, 1u);
      v22 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v23;
    }
    memset(&v23[v22], 0, v21 - v22);
    *(_QWORD *)(a2 + 8) = v21;
  }
  qlseek(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL), *(_QWORD *)(*(_QWORD *)(a1 + 64) + 480LL) + *(_QWORD *)(a3 + 8), 0);
  v24 = *(_QWORD *)(a1 + 64);
  v25 = lreadbytes(*(_QWORD *)(v24 + 472), *(void **)a2, v21, 0);
  if ( v25 < 0 )
  {
    v26 = *(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD, __int64))(v24 + 496);
    v27 = qlseek(*(_QWORD *)(v24 + 472), 0, 1);
    v26(v24, 19, v21, v25, v27);
  }
  if ( v34 )
  {
    v35 = 0;
    qfree(v34);
    v34 = nullptr;
    v36 = 0;
  }
}
// 51734: variable 'v15' is possibly undefined
// 51734: variable 'v38' is possibly undefined
// 51948: variable 'a2' is possibly undefined
// 51948: variable 'a3' is possibly undefined
// 51948: variable 'a4' is possibly undefined
// 51948: variable 'a5' is possibly undefined
// 51948: variable 'a6' is possibly undefined
// 51948: variable 'a7' is possibly undefined
// 51948: variable 'a8' is possibly undefined
// 51948: variable 'v30' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
