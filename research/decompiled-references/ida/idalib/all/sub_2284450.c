_BYTE *__fastcall sub_2284450(_QWORD *a1, _BYTE *a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // r12d
  _BYTE *v13; // rax
  _BYTE *v14; // r15
  __int64 v15; // rdi
  int v16; // r14d
  int v17; // ebp
  __int64 v18; // r8
  _BYTE *v19; // r15
  int v20; // r13d
  _QWORD *v21; // r12
  int v22; // ebx
  __int64 v23; // rax
  const unsigned __int16 **v24; // rax
  const unsigned __int16 *v25; // rdx
  __int16 v26; // ax
  __int64 v27; // rcx
  int v28; // r9d
  __int64 v29; // rax
  _BYTE *v30; // rax
  size_t v31; // rbp
  int v32; // eax
  int v33; // eax
  const unsigned __int16 **v34; // rax
  __int16 v35; // ax
  const unsigned __int16 **v36; // rax
  int v39; // [rsp+Ch] [rbp-6Ch]
  __int64 v40; // [rsp+10h] [rbp-68h]
  _BYTE *v41; // [rsp+18h] [rbp-60h]
  void *s2; // [rsp+20h] [rbp-58h]
  void *dest; // [rsp+30h] [rbp-48h]

  v6 = a1;
  v7 = *a1;
  v8 = a4;
  v40 = a4;
  if ( a4 >= a5 )
  {
    v10 = a4;
LABEL_6:
    v12 = 128;
    s2 = (void *)v6[13];
    dest = (void *)v6[12];
    if ( (_BYTE *)v6[4] != a2 )
      v12 = (char)*(a2 - 1);
    v13 = memset((void *)v6[10], 0, *(_QWORD *)(v7 + 48));
    v13[v10] = 1;
    v41 = nullptr;
    v14 = (_BYTE *)sub_2284030((__int64 *)(*v6 + 8LL), (_QWORD *)(*v6 + 24LL), v40, a5, (__int64)v13, 132, (__int64)v13);
    if ( (_BYTE *)v6[5] == a2 )
      goto LABEL_32;
LABEL_9:
    v15 = *v6;
    v39 = (char)*a2;
    if ( v12 == 10 )
    {
      v17 = *(_DWORD *)(v15 + 40) & 8;
      if ( !v17 )
      {
LABEL_39:
        v34 = __ctype_b_loc();
        v25 = *v34;
        v27 = (unsigned __int8)v12;
        v35 = (*v34)[(unsigned __int8)v12] & 8;
        if ( v12 == 95 || v35 )
          goto LABEL_46;
        if ( v39 != 128 )
        {
          v26 = v25[(unsigned __int8)v39] & 8;
          if ( !v26 && v39 != 95 )
            goto LABEL_44;
LABEL_23:
          if ( (v25[v27] & 8) == 0 && v12 != 95 || v39 == 95 || v26 )
            goto LABEL_25;
LABEL_59:
          v28 = 134;
          goto LABEL_26;
        }
        while ( 1 )
        {
LABEL_52:
          v12 = v39;
LABEL_27:
          v30 = v41;
          v31 = *(_QWORD *)(v15 + 48);
          if ( v14[a5] )
            v30 = a2;
          v41 = v30;
          v32 = memcmp(v14, s2, v31);
          if ( a2 == a3 || !v32 )
            return v41;
          ++a2;
          memmove(dest, v14, v31);
          memmove(v14, s2, *(_QWORD *)(*v6 + 48LL));
          v14 = (_BYTE *)sub_2284030(
                           (__int64 *)(*v6 + 8LL),
                           (_QWORD *)(*v6 + 24LL),
                           v40,
                           a5,
                           (__int64)dest,
                           v12,
                           (__int64)v14);
          if ( (_BYTE *)v6[5] != a2 )
            goto LABEL_9;
LABEL_32:
          v15 = *v6;
          if ( v12 != 10 )
            break;
          v17 = *(_DWORD *)(v15 + 40) & 8;
          if ( v17 )
          {
            v16 = *(_DWORD *)(v15 + 76);
            v17 = 129;
            v33 = *((_DWORD *)v6 + 2);
            goto LABEL_35;
          }
          v39 = 128;
          v16 = v6[1] & 2;
          if ( !v16 )
          {
            v17 = 130;
LABEL_37:
            v16 += *(_DWORD *)(v15 + 80);
            if ( v16 > 0 )
              goto LABEL_14;
LABEL_38:
            if ( v12 == 128 )
              continue;
          }
          goto LABEL_39;
        }
        if ( v12 != 128 )
        {
          v33 = *((_DWORD *)v6 + 2);
          v16 = 0;
          v17 = 0;
LABEL_35:
          v39 = 128;
          if ( (v33 & 2) != 0 )
            goto LABEL_13;
LABEL_36:
          v17 = (v17 == 129) + 130;
          goto LABEL_37;
        }
        v33 = *((_DWORD *)v6 + 2);
        if ( (v33 & 1) != 0 )
        {
          v16 = 0;
          v17 = 0;
          goto LABEL_35;
        }
        v39 = 128;
      }
    }
    else
    {
      v16 = 0;
      v17 = 0;
      if ( v12 != 128 || (v6[1] & 1) != 0 )
        goto LABEL_11;
    }
    v16 = *(_DWORD *)(v15 + 76);
    v17 = 129;
LABEL_11:
    if ( v39 != 10 )
    {
      if ( v39 != 128 )
        goto LABEL_13;
      v33 = *((_DWORD *)v6 + 2);
      goto LABEL_35;
    }
    if ( (*(_BYTE *)(v15 + 40) & 8) == 0 )
    {
LABEL_13:
      if ( v16 > 0 )
      {
LABEL_14:
        v18 = (__int64)v14;
        v19 = a2;
        v20 = v12;
        v21 = v6;
        v22 = v16;
        while ( 1 )
        {
          v23 = sub_2284030((__int64 *)(v15 + 8), (_QWORD *)(v15 + 24), v40, a5, v18, v17, v18);
          v18 = v23;
          if ( !--v22 )
            break;
          v15 = *v21;
        }
        v6 = v21;
        v12 = v20;
        a2 = v19;
        v14 = (_BYTE *)v23;
        v15 = *v6;
      }
      if ( v17 == 129 )
      {
        if ( v39 != 128 )
        {
          v24 = __ctype_b_loc();
          v25 = *v24;
          v26 = (*v24)[(unsigned __int8)v39] & 8;
          if ( v39 == 95 || v26 )
          {
            v27 = (unsigned __int8)v12;
            if ( v12 != 128 )
              goto LABEL_23;
LABEL_25:
            v28 = 133;
LABEL_26:
            v29 = sub_2284030((__int64 *)(v15 + 8), (_QWORD *)(v15 + 24), v40, a5, (__int64)v14, v28, (__int64)v14);
            v15 = *v6;
            v12 = v39;
            v14 = (_BYTE *)v29;
            goto LABEL_27;
          }
        }
LABEL_44:
        if ( v12 == 128 )
          goto LABEL_52;
        v36 = __ctype_b_loc();
        v25 = *v36;
        v35 = (*v36)[(unsigned __int8)v12] & 8;
LABEL_46:
        if ( v12 != 95 && !v35 )
          goto LABEL_52;
        if ( v17 != 130 )
        {
          v12 = 128;
          if ( v39 == 128 )
            goto LABEL_27;
          if ( (v25[(unsigned __int8)v39] & 8) != 0 || v39 == 95 )
          {
            if ( (unsigned int)(v17 - 133) > 1 )
              goto LABEL_52;
            goto LABEL_25;
          }
        }
        goto LABEL_59;
      }
      goto LABEL_38;
    }
    goto LABEL_36;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * v8);
    v10 = v8;
    v11 = (unsigned int)v9 & 0xF8000000;
    if ( v11 == 1744830464 || v11 == 1879048192 )
      goto LABEL_65;
    if ( v11 != 0x10000000 )
    {
      v40 = v8;
      goto LABEL_6;
    }
    if ( a3 == a2 || *a2 != (_BYTE)v9 )
      return nullptr;
    ++a2;
LABEL_65:
    if ( a5 == ++v8 )
    {
      v40 = v8;
      v10 = a5;
      goto LABEL_6;
    }
  }
}
