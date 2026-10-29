__int64 __fastcall sub_1453A80(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  char v7; // r14
  __int16 v8; // di
  unsigned int v9; // eax
  unsigned int v10; // r15d
  __int16 v11; // ax
  int v12; // edx
  __int64 v14; // rax
  size_t v15; // r14
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // r10d
  __int64 *v19; // r9
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rcx
  char *v24; // rdx
  _QWORD *v25; // r11
  _QWORD *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // r9
  _QWORD *v29; // rax
  int v30; // edx
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  const void *src; // [rsp+0h] [rbp-308h]
  void *srca; // [rsp+0h] [rbp-308h]
  unsigned int v37; // [rsp+8h] [rbp-300h]
  __int64 v38; // [rsp+8h] [rbp-300h]
  unsigned int v39; // [rsp+8h] [rbp-300h]
  __int64 *v40; // [rsp+10h] [rbp-2F8h]
  __int64 *v41; // [rsp+10h] [rbp-2F8h]
  _QWORD *v42; // [rsp+18h] [rbp-2F0h]
  __int64 *v43; // [rsp+28h] [rbp-2E0h] BYREF
  unsigned __int8 *v44[6]; // [rsp+30h] [rbp-2D8h] BYREF
  void *v45; // [rsp+60h] [rbp-2A8h]
  _DWORD v46[130]; // [rsp+78h] [rbp-290h] BYREF
  void *ptr; // [rsp+280h] [rbp-88h]
  __int64 v48; // [rsp+298h] [rbp-70h] BYREF
  unsigned __int8 v49; // [rsp+2C4h] [rbp-44h]

  v7 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v7 | 0x20;
  sub_14634E0(a1, a2);
  *(_BYTE *)(a1 + 544) = (32 * ((v7 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  v8 = *(_WORD *)(a2 + 16);
  if ( v8 == 14 && (*(_BYTE *)(a2 + 18) & 0x20) == 0 )
  {
    sub_13EE5A0((__int64)v44, (int *)a2, 1, (_QWORD *)a1, 0);
    v10 = v49;
    if ( v49 )
    {
LABEL_23:
      if ( ptr != &v48 )
        free(ptr);
      if ( v45 != v46 )
        free(v45);
      return v10;
    }
    v15 = (unsigned int)(v46[128] - (_DWORD)v45);
    src = v45;
    v16 = sub_2244B30(v45, v15);
    v18 = sub_2244CB0(a1 + 552, src, v15, v16);
    v19 = (__int64 *)(*(_QWORD *)(a1 + 552) + 8LL * v18);
    if ( *v19 )
    {
      if ( *v19 != -8 )
      {
        sub_989490(&v43, v19, 0);
        v21 = v43;
LABEL_21:
        v28 = *v21;
        v29 = *(_QWORD **)(*v21 + 8);
        if ( !v29 )
        {
          v31 = *(_QWORD *)(a1 + 672);
          if ( !v31
            || (v38 = v28,
                v29 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v31 + 16LL))(
                                  v31,
                                  src,
                                  v15),
                v28 = v38,
                (*(_QWORD *)(v38 + 8) = v29) == 0) )
          {
            v32 = *(_QWORD *)(a1 + 576);
            *(_QWORD *)(a1 + 656) += 24LL;
            v29 = (_QWORD *)((v32 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( *(_QWORD *)(a1 + 584) >= (unsigned __int64)(v29 + 3) && v32 )
            {
              *(_QWORD *)(a1 + 576) = v29 + 3;
            }
            else
            {
              srca = (void *)v28;
              v29 = (_QWORD *)sub_986170(a1 + 576, 24, 24, 3, v20, v28);
              v28 = (__int64)srca;
            }
            v33 = *v29 & 0xFFFFF80000000000LL;
            v29[1] = 0;
            *v29 = v33 | 0x1FFFC05;
            *(_QWORD *)(v28 + 8) = v29;
            v29[2] = v28;
          }
        }
        v30 = *(_DWORD *)a2;
        *(_QWORD *)(a3 + 8) = v29;
        *(_DWORD *)a3 = v30;
        goto LABEL_23;
      }
      --*(_DWORD *)(a1 + 568);
    }
    v22 = *(_QWORD *)(a1 + 576);
    *(_QWORD *)(a1 + 656) += v15 + 17;
    v23 = (_QWORD *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v24 = (char *)v23 + v15 + 17;
    if ( *(_QWORD *)(a1 + 584) >= (unsigned __int64)v24 && v22 )
    {
      *(_QWORD *)(a1 + 576) = v24;
    }
    else
    {
      v41 = v19;
      v39 = v18;
      v34 = sub_986170(a1 + 576, v15 + 17, v15 + 17, 3, v17, (__int64)v19);
      v19 = v41;
      v18 = v39;
      v23 = (_QWORD *)v34;
    }
    v25 = v23 + 2;
    if ( v15 )
    {
      v42 = v23;
      v40 = v19;
      v37 = v18;
      v26 = memcpy(v23 + 2, src, v15);
      v23 = v42;
      v19 = v40;
      v18 = v37;
      v25 = v26;
    }
    *((_BYTE *)v25 + v15) = 0;
    *v23 = v15;
    v23[1] = 0;
    *v19 = (__int64)v23;
    ++*(_DWORD *)(a1 + 564);
    v27 = sub_22450D0(a1 + 552, v18);
    sub_989490(&v43, (__int64 *)(*(_QWORD *)(a1 + 552) + 8LL * v27), 0);
    v21 = v43;
    goto LABEL_21;
  }
  LOBYTE(v9) = sub_10CCDE0(v8);
  v10 = v9;
  if ( (_BYTE)v9 )
  {
    v12 = *(_DWORD *)a2;
  }
  else
  {
    v11 = *(_WORD *)(a2 + 16);
    v12 = *(_DWORD *)a2;
    if ( (unsigned __int16)(v11 - 7) > 0xCu && v11 != 1 )
    {
      v14 = *(_QWORD *)(a2 + 8);
      if ( v14 )
      {
        *(_DWORD *)a3 = v12;
        *(_QWORD *)(a3 + 8) = v14;
        return v10;
      }
    }
  }
  v10 = 1;
  sub_FC70B0((__int64)v44, *(_QWORD *)(a1 + 48), v12, 1124);
  sub_AE9DF0(v44, a4, 2u);
  sub_AEA040((__int64)v44);
  return v10;
}
