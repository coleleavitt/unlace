void __fastcall sub_9A9BF0(__int64 a1, unsigned __int16 **a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v10; // rax
  __int64 v11; // r14
  __int16 v12; // ax
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // cl
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 i; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // r15
  __int64 v28; // rax
  __int64 *v29; // r11
  __int64 **v30; // rax
  bool v31; // zf
  __int64 *v32; // rdx
  __int64 v33; // rcx
  __int64 *v34; // rdx
  __int64 *v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rax
  unsigned __int16 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned __int16 *v41; // rax
  unsigned __int16 *v42; // rdx
  __int64 v43; // rdi
  void (*v44)(); // rax
  unsigned int v45; // [rsp+Ch] [rbp-4Ch]
  __int64 v46; // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+10h] [rbp-48h]
  __int64 *v48; // [rsp+10h] [rbp-48h]
  __int64 v49; // [rsp+18h] [rbp-40h]

  while ( 1 )
  {
    v10 = sub_BD7BC0(a3);
    v11 = sub_BD9810(v10);
    v45 = sub_BDCD00(v11);
    v12 = *(_WORD *)v11 & 0x1FF;
    if ( v12 == 71 )
    {
      while ( 1 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 32LL))(*(_QWORD *)(v11 + 16));
        v14 = *(_BYTE *)(v13 + 28) & 0x7F;
        if ( (unsigned int)(v14 - 40) > 6 || v14 != 40 && v14 != 46 )
          break;
        v15 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
        {
          v15 = *(_QWORD *)(v15 + 8);
          if ( !v15 )
            break;
        }
        else if ( !v15 )
        {
          break;
        }
        v46 = v13;
        v16 = *(_BYTE *)(sub_B6AD60(v15) + 8) & 0x7F;
        if ( v16 > 0x12u )
        {
          if ( ((v16 + 94) & 0x7Fu) > 5 )
            break;
        }
        else if ( ((1LL << v16) & 0x40182) == 0 )
        {
          break;
        }
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
          break;
        v17 = sub_B4F900(v46);
        if ( v17 == v11 || !v17 )
          break;
        v18 = sub_BD7BC0(v17);
        v11 = sub_BD9810(v18);
        v12 = *(_WORD *)v11 & 0x1FF;
        if ( v12 != 71 )
          goto LABEL_16;
      }
      v12 = *(_WORD *)v11 & 0x1FF;
    }
LABEL_16:
    if ( v12 == 4 )
    {
      if ( *(_BYTE *)(v11 + 2) >> 3 != 5 )
        return;
      goto LABEL_21;
    }
    if ( ((v12 + 394) & 0x1FFu) > 1 )
      break;
    if ( ((*(_WORD *)(v11 + 2) >> 3) & 0x3F) != 0 )
    {
      if ( ((*(_WORD *)(v11 + 2) >> 3) & 0x3F) != 1 )
        return;
LABEL_21:
      sub_9AA090(a1, a2, *(_QWORD *)(v11 + 16), a4, a5);
      return;
    }
    a3 = *(_QWORD *)(v11 + 16);
  }
  if ( v12 == 123 )
    goto LABEL_21;
  if ( v12 == 46 )
  {
    v19 = *(_QWORD *)(v11 + 16);
    if ( (*(_QWORD *)v11 & 0x80000LL) != 0 )
      sub_9AA090(a1, a2, v19, a4, a5);
    else
      sub_9A9BF0(a1, a2, v19, a4, a5);
    v12 = *(_WORD *)v11 & 0x1FF;
  }
  for ( i = v11; v12 == 79; v12 = *(_WORD *)i & 0x1FF )
    i = *(_QWORD *)(i + 16);
  if ( v12 == 71 )
  {
    v21 = *(_QWORD *)(i + 16);
    v49 = v21;
  }
  else
  {
    if ( v12 != 46 )
      return;
    v21 = *(_QWORD *)(i + 24);
    v49 = v21;
  }
  if ( v21 && (*(_BYTE *)(v21 + 29) & 1) != 0 )
  {
    v22 = sub_B68690(v21);
    v23 = *(__int64 **)v22;
    v24 = *(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8);
    if ( *(_QWORD *)v22 < v24 )
    {
      v37 = *(__int64 **)v22;
      while ( *(_WORD *)(*v37 + 36) != 223 )
      {
        if ( (__int64 *)v24 == ++v37 )
          goto LABEL_38;
      }
      if ( (__int64 *)v24 == v37 )
        goto LABEL_38;
    }
    else
    {
      if ( v23 == (__int64 *)v24 )
        goto LABEL_38;
      if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 223 )
      {
        v25 = (__int64 *)(v24 + 8);
        while ( v23 != v25 )
        {
          v26 = *v25++;
          if ( *(_WORD *)(v26 + 36) == 223 )
            goto LABEL_68;
        }
        goto LABEL_38;
      }
    }
LABEL_68:
    v38 = *a2;
    v39 = (__int64)&(*a2)[(_QWORD)a2[1]];
    if ( *a2 == (unsigned __int16 *)v39 )
    {
LABEL_73:
      v43 = *(_QWORD *)(a1 + 320);
      v44 = *(void (**)())(*(_QWORD *)v43 + 64LL);
      if ( v44 != nullsub_354 )
        ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v44)(v43, v49, a5, a4, v45);
      goto LABEL_38;
    }
    v40 = *(_QWORD *)(a1 + 544);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 8LL * *v38) + 8LL) & 2) != 0 )
    {
      v41 = v38 + 1;
      do
      {
        v42 = v41;
        if ( v41 == (unsigned __int16 *)v39 )
          goto LABEL_73;
        ++v41;
      }
      while ( (*(_BYTE *)(*(_QWORD *)(v40 + 8LL * *v42) + 8LL) & 2) != 0 );
    }
LABEL_38:
    v27 = nullptr;
    v28 = sub_9A4B80(v49);
    v29 = (__int64 *)v28;
    if ( (*(_BYTE *)(v49 + 29) & 1) != 0 )
    {
      v47 = v28;
      v30 = (__int64 **)sub_B68690(v49);
      v29 = (__int64 *)v47;
      v27 = *v30;
    }
    v31 = v27 == v29;
    if ( v27 >= v29 )
      goto LABEL_48;
LABEL_41:
    v32 = v27;
    if ( *(_WORD *)(*v27 + 36) == 222 )
      goto LABEL_44;
    while ( v29 != ++v32 )
    {
      if ( *(_WORD *)(*v32 + 36) == 222 )
      {
        while ( 1 )
        {
LABEL_44:
          v33 = *v27;
          if ( *(_WORD *)(*v27 + 36) != 222 )
          {
            v34 = v27 + 1;
            do
            {
              v33 = *v34;
              v27 = v34++;
            }
            while ( *(_WORD *)(v33 + 36) != 222 );
          }
          v48 = v29;
          ++v27;
          sub_9A9750(a1, (__int64)a2, v49, v11, a4, *(_QWORD *)(v33 + 40), a5, 0, v45);
          v29 = v48;
          v31 = v27 == v48;
          if ( v27 < v48 )
            goto LABEL_41;
LABEL_48:
          if ( v31 )
            return;
          if ( *(_WORD *)(*v29 + 36) != 222 )
          {
            v35 = v29 + 1;
            while ( v35 != v27 )
            {
              v36 = *v35++;
              if ( *(_WORD *)(v36 + 36) == 222 )
                goto LABEL_44;
            }
            return;
          }
        }
      }
    }
  }
}

