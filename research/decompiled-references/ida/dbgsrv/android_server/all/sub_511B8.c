/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_511B8
// Address: 0x00000000000511B8

//----- (00000000000511B8) ----------------------------------------------------
void __fastcall sub_511B8(__int64 *a1, pthread_mutex_t *a2, __int64 a3)
{
  unsigned __int64 v5; // x23
  const char *v7; // x24
  const char *v8; // x2
  int v9; // w1
  __int64 v10; // x8
  __int64 v11; // x25
  __int64 v12; // x22
  __int64 v13; // x0
  unsigned __int64 v14; // x22
  unsigned __int64 v15; // x8
  char *align; // x0
  __int64 v17; // x20
  int v18; // w19
  void (__fastcall *v19)(__int64, __int64, unsigned __int64, _QWORD, __int64); // x21
  __int64 v20; // x0
  void *ptr; // [xsp+0h] [xbp-90h] BYREF
  __int64 v22; // [xsp+8h] [xbp-88h]
  __int64 v23; // [xsp+10h] [xbp-80h]
  void *v24; // [xsp+18h] [xbp-78h] BYREF
  __int64 v25; // [xsp+20h] [xbp-70h]
  __int64 v26; // [xsp+28h] [xbp-68h]
  char v27[4]; // [xsp+34h] [xbp-5Ch] BYREF
  __int64 v28; // [xsp+38h] [xbp-58h]
  int8x16x2_t v29; // 0:q0.32

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_QWORD *)(a3 + 32);
  sub_39140(&v24, "?");
  if ( a1[22] >= 1 && a1[24] )
    sub_55D60(a1[20], (__int64)&v24, a1 + 22, *(_DWORD *)a3);
  v7 = &byte_F154B;
  ptr = nullptr;
  v22 = 0;
  v23 = 0;
  if ( v25 )
    v8 = (const char *)v24;
  else
    v8 = &byte_F154B;
  sub_3C748((__int64)&ptr, "Size of %s", v8);
  v10 = a1[20];
  v11 = *(_QWORD *)(a3 + 24);
  v12 = *(_QWORD *)(v10 + 472);
  if ( v22 )
    v7 = (const char *)ptr;
  if ( v11 == -1 )
    v11 = qlseek(*(_QWORD *)(v10 + 472), 0, 1);
  v13 = qlsize(v12, v9, v29);
  v14 = v13 - v11;
  if ( ((v13 - v11) | v11) < 0 )
  {
    v14 = 0;
  }
  else if ( v14 >= v5 )
  {
    v14 = v5;
    goto LABEL_16;
  }
  if ( (unsigned int)sub_5C340(
                       1,
                       (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       v7,
                       v5,
                       v14,
                       ". Do you want to continue with the new value?") != 1 )
    sub_5BDE0(0);
LABEL_16:
  v15 = *(&a2->__align + 1);
  if ( v15 >= v14 )
  {
    if ( v15 != v14 )
    {
      v27[0] = 0;
      sub_5BBF4(a2, v14, v27);
    }
  }
  else
  {
    if ( *(&a2->__align + 2) >= v14 )
    {
      align = (char *)a2->__align;
    }
    else
    {
      align = (char *)qvector_reserve(a2, (void *)a2->__align, v14, 1u);
      v15 = *(&a2->__align + 1);
      a2->__align = (__int64)align;
    }
    memset(&align[v15], 0, v14 - v15);
    *(&a2->__align + 1) = v14;
  }
  qlseek(*(_QWORD *)(a1[20] + 472), *(_QWORD *)(a1[20] + 480) + *(_QWORD *)(a3 + 24), 0);
  v17 = a1[20];
  v18 = lreadbytes(*(_QWORD *)(v17 + 472), (void *)a2->__align, v14, 0);
  if ( v18 < 0 )
  {
    v19 = *(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD, __int64))(v17 + 496);
    v20 = qlseek(*(_QWORD *)(v17 + 472), 0, 1);
    v19(v17, 19, v14, v18, v20);
  }
  if ( ptr )
  {
    v22 = 0;
    qfree(ptr);
    ptr = nullptr;
    v23 = 0;
  }
  if ( v24 )
  {
    v25 = 0;
    qfree(v24);
    v24 = nullptr;
    v26 = 0;
  }
}
// 51288: variable 'v9' is possibly undefined
// 51288: variable 'v29' is possibly undefined
// F154B: using guessed type char byte_F154B;
