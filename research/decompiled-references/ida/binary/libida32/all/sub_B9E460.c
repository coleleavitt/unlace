unsigned __int64 __fastcall sub_B9E460(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r15
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  char v21; // al
  char v22; // cl
  __int64 v23; // rax
  char v24; // cl
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 *v30; // rdi
  char v31; // al
  unsigned __int64 v32; // rcx
  __int64 *v33; // rdi
  char v34; // al
  unsigned __int64 v36; // rcx
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // [rsp+0h] [rbp-48h]
  int v46; // [rsp+Ch] [rbp-3Ch]

  v10 = 8 * (a5 + (a7 != nullptr)) + 24;
  v11 = a1[294];
  a1[304] += v10;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v10 + v12 && v11 )
  {
    a1[294] = v10 + v12;
  }
  else
  {
    v45 = a5;
    v46 = a6;
    v40 = sub_962430((__int64)(a1 + 294), v10, v10, 3, a5, a6);
    LODWORD(a6) = v46;
    LODWORD(a5) = v45;
    v12 = v40;
  }
  v13 = *(_DWORD *)(v12 + 20);
  *(_DWORD *)(v12 + 8) = a2;
  v14 = a5 & 0x1FFFFFFF;
  *(_QWORD *)v12 = 0;
  *(_DWORD *)(v12 + 12) = a3;
  v15 = v14 | v13 & 0xE0000000;
  *(_DWORD *)(v12 + 16) = a6;
  *(_DWORD *)(v12 + 20) = v15;
  *(_BYTE *)(v12 + 23) = ((a7 != nullptr) << 6) | HIBYTE(v15) & 0x1F;
  if ( (_DWORD)v14 )
  {
    v16 = 0;
    while ( 1 )
    {
      v20 = *(_QWORD *)(a4 + 8 * v16);
      *(_QWORD *)(v12 + 8 * v16 + 24) = v20;
      v21 = sub_B68150(v20);
      v22 = *(_BYTE *)(v20 + 28) & 0x7F;
      if ( v22 == 47 )
      {
        v17 = v21 == 0;
        v18 = *(_QWORD *)(v20 + 48);
        if ( v17 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
            goto LABEL_8;
          if ( (*(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( !(_BYTE)byte_2CA2540 && __cxa_guard_acquire(&byte_2CA2540) )
            {
              qword_2CA2560 &= 0xFFFFFFFE00000000LL;
              qword_2CA2568 = 0;
              qword_2CA2578 = 0;
              __cxa_guard_release(&byte_2CA2540);
            }
            v32 = *(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v32 )
            {
              v33 = (__int64 *)(*(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL);
              v38 = (*(__int64 *)(v20 + 72) >> 1) & 3;
              if ( v38 == 1 )
              {
                v39 = *(_QWORD *)(v32 + 72);
                v33 = nullptr;
                if ( !v39 )
                  goto LABEL_45;
                v33 = (__int64 *)(*(_QWORD *)(v32 + 72) & 0xFFFFFFFFFFFFFFF8LL);
                if ( ((v39 >> 1) & 3) != 2 || !v33 )
                  goto LABEL_45;
              }
              else if ( v38 != 2 )
              {
                goto LABEL_45;
              }
              v33 = (__int64 *)v33[1];
            }
            else
            {
              v33 = &qword_2CA2560;
            }
LABEL_45:
            if ( (unsigned __int8)sub_EF98A0(v33) )
            {
LABEL_8:
              *(_BYTE *)(v12 + 23) |= 0x20u;
              v18 = *(_QWORD *)(v20 + 48);
            }
            else
            {
              v18 = *(_QWORD *)(v20 + 48);
            }
          }
        }
        v19 = sub_F34140(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL));
        if ( !v19 || *(_BYTE *)(v19 + 16) != 16 || !*(_QWORD *)(v19 + 32) )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( v22 != 68 )
      {
        if ( !v21 && (*(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( !(_BYTE)byte_2CA2580 && __cxa_guard_acquire(&byte_2CA2580) )
          {
            qword_2CA25A0 &= 0xFFFFFFFE00000000LL;
            qword_2CA25A8 = 0;
            qword_2CA25B8 = 0;
            __cxa_guard_release(&byte_2CA2580);
          }
          v36 = *(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v36 )
          {
            v37 = &qword_2CA25A0;
            goto LABEL_56;
          }
          v37 = (__int64 *)(*(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL);
          v43 = (*(__int64 *)(v20 + 72) >> 1) & 3;
          if ( v43 == 1 )
          {
            v44 = *(_QWORD *)(v36 + 72);
            v37 = nullptr;
            if ( v44 )
            {
              v37 = (__int64 *)(*(_QWORD *)(v36 + 72) & 0xFFFFFFFFFFFFFFF8LL);
              if ( ((v44 >> 1) & 3) == 2 )
              {
                if ( v37 )
LABEL_79:
                  v37 = (__int64 *)v37[1];
              }
            }
          }
          else if ( v43 == 2 )
          {
            goto LABEL_79;
          }
LABEL_56:
          if ( (unsigned __int8)sub_EF98A0(v37) )
            goto LABEL_38;
        }
        v31 = *(_BYTE *)(v20 + 60);
        if ( (v31 & 4) != 0 && v20 != -80 && (**(_DWORD **)(v20 + 80) & 0x4000) != 0 )
        {
LABEL_38:
          *(_BYTE *)(v12 + 23) |= 0x20u;
          v31 = *(_BYTE *)(v20 + 60);
        }
        if ( (v31 & 2) == 0 )
          goto LABEL_13;
LABEL_12:
        *(_BYTE *)(v12 + 23) |= 0x80u;
        goto LABEL_13;
      }
      if ( !v21 )
      {
        v23 = *(_QWORD *)(v20 + 56);
        v24 = *(_BYTE *)(v23 + 23);
        if ( (v24 & 0x20) != 0 )
          goto LABEL_33;
        if ( v24 < 0 )
        {
          v25 = v23 + 24;
          v26 = v23 + 24 + 8LL * (*(_DWORD *)(v23 + 20) & 0x1FFFFFFF);
          if ( v23 + 24 != v26 )
          {
            v27 = *(_QWORD *)(v26 - 8);
            if ( (*(_BYTE *)(v27 + 29) & 2) != 0 )
            {
              v28 = v26 - 8;
              while ( (*(_BYTE *)(v27 + 28) & 0x7F) != 0x43
                   || (*(_BYTE *)(v27 + 60) & 4) == 0
                   || v27 == -80
                   || (**(_DWORD **)(v27 + 80) & 0x4000) == 0 )
              {
                if ( v25 != v28 )
                {
                  v27 = *(_QWORD *)(v28 - 8);
                  v28 -= 8;
                  if ( (*(_BYTE *)(v27 + 29) & 2) != 0 )
                    continue;
                }
                goto LABEL_28;
              }
LABEL_33:
              *(_BYTE *)(v12 + 23) |= 0x20u;
              goto LABEL_13;
            }
          }
        }
LABEL_28:
        if ( (*(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          break;
      }
LABEL_13:
      ++v16;
      v14 = *(_DWORD *)(v12 + 20) & 0x1FFFFFFF;
      if ( (unsigned int)v14 <= (unsigned int)v16 )
        goto LABEL_47;
    }
    if ( !(_BYTE)byte_2CA2510 && __cxa_guard_acquire(&byte_2CA2510) )
    {
      qword_2CA2520 &= 0xFFFFFFFE00000000LL;
      qword_2CA2528 = 0;
      qword_2CA2538 = 0;
      __cxa_guard_release(&byte_2CA2510);
    }
    v29 = *(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v29 )
    {
      v30 = &qword_2CA2520;
      goto LABEL_32;
    }
    v30 = (__int64 *)(*(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    v41 = (*(__int64 *)(v20 + 72) >> 1) & 3;
    if ( v41 == 1 )
    {
      v42 = *(_QWORD *)(v29 + 72);
      v30 = nullptr;
      if ( v42 )
      {
        v30 = (__int64 *)(*(_QWORD *)(v29 + 72) & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v42 >> 1) & 3) == 2 )
        {
          if ( v30 )
            goto LABEL_72;
        }
      }
    }
    else if ( v41 == 2 )
    {
LABEL_72:
      v30 = (__int64 *)v30[1];
    }
LABEL_32:
    if ( (unsigned __int8)sub_EF98A0(v30) )
      goto LABEL_33;
    goto LABEL_13;
  }
LABEL_47:
  v34 = *(_BYTE *)(v12 + 23);
  if ( (v34 & 0x40) != 0 )
  {
    if ( (*a7 & 0x4000) != 0 )
      *(_BYTE *)(v12 + 23) = v34 | 0x20;
    *(_QWORD *)(v12 + 8 * v14 + 24) = a7;
  }
  return v12;
}

