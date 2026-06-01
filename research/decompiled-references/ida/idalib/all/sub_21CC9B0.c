_QWORD *__fastcall sub_21CC9B0(_QWORD *a1, __int64 a2, const void *a3, size_t a4, unsigned __int64 *a5)
{
  _QWORD *v8; // rbp
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rbx
  _WORD *v13; // rdx
  _QWORD *v14; // rax
  int v15; // ecx
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r11
  int v21; // eax
  void *v22; // r8
  unsigned int *v23; // rcx
  unsigned __int64 v24; // rdx
  void *v25; // [rsp+8h] [rbp-130h]
  int v27; // [rsp+18h] [rbp-120h]
  int v28; // [rsp+1Ch] [rbp-11Ch]
  __int64 v29; // [rsp+20h] [rbp-118h]
  __int64 v30; // [rsp+28h] [rbp-110h]
  __int64 v31; // [rsp+30h] [rbp-108h] BYREF
  size_t v32; // [rsp+38h] [rbp-100h]
  _QWORD v33[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int16 v34; // [rsp+80h] [rbp-B8h]

  v8 = *(_QWORD **)(a2 + 8);
  sub_2231D80(v33);
  sub_2231FA0(v33, a3, a4);
  sub_22321A0(v33, &v31);
  v9 = v31;
  v10 = *(_QWORD *)(v8[2] + 8 * (v31 & (*v8 - 1LL)));
  if ( v10 && (v13 = (_WORD *)(v8[3] + v10), v14 = v13 + 1, v15 = (unsigned __int16)*v13, *v13) )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = v14[1];
      v18 = v14[2];
      v19 = (__int64)(v14 + 3);
      v20 = v17 + v18;
      if ( *v14 == v9 )
      {
        v25 = (void *)v14[2];
        if ( a4 == v17 )
        {
          v29 = v9;
          v28 = v16;
          v27 = v15;
          if ( !a4 )
          {
            v31 = (__int64)(v14 + 3);
            v22 = (void *)(v17 + v18);
            v23 = (unsigned int *)(v14 + 3);
            v32 = 0;
            goto LABEL_11;
          }
          v30 = v17 + v18;
          v21 = memcmp(v14 + 3, a3, a4);
          v20 = v30;
          v15 = v27;
          v16 = v28;
          v9 = v29;
          if ( !v21 )
            break;
        }
      }
      ++v16;
      v14 = (_QWORD *)(v19 + v20);
      if ( v15 == v16 )
        goto LABEL_2;
    }
    v31 = v19;
    v22 = v25;
    v23 = (unsigned int *)(a4 + v19);
    v32 = a4;
    if ( !(a4 + v19) )
      goto LABEL_2;
LABEL_11:
    *a5 = sub_21CC0B0(v8 + 4, v31, v32, v23, v22);
    a5[1] = v24;
    if ( v24 )
    {
      *a1 = 0;
    }
    else
    {
      sub_21C93F0(v33, 9, "profile data is empty");
      *a1 = v33[0];
    }
  }
  else
  {
LABEL_2:
    v34 = 257;
    v11 = operator new(0x30u);
    *(_DWORD *)(v11 + 8) = 13;
    *(_QWORD *)v11 = &off_2C74C70;
    sub_2253560(v11 + 16, v33);
    *a1 = v11;
  }
  return a1;
}
