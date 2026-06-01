__int64 __fastcall sub_BBD280(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, int a7, _DWORD *a8)
{
  __int64 v8; // r9
  int v10; // eax
  __int64 i; // rbp
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // al
  char v18; // dl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 *v25; // rdi
  char v26; // al
  unsigned __int64 v27; // rdx
  __int64 *v28; // rdi
  __int64 result; // rax
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  v8 = a6 & 0x1FFFFFFF;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 12) = a4;
  *(_DWORD *)(a1 + 16) = a7;
  v10 = v8 | *(_DWORD *)(a1 + 20) & 0xE0000000;
  *(_DWORD *)(a1 + 20) = v10;
  *(_BYTE *)(a1 + 23) = ((a8 != nullptr) << 6) & 0x5F | HIBYTE(v10) & 0x1F;
  if ( (_DWORD)v8 )
  {
    for ( i = 0; (unsigned int)v8 > (unsigned int)i; ++i )
    {
      v16 = *(_QWORD *)(a5 + 8 * i);
      *(_QWORD *)(a1 + 8 * i + 24) = v16;
      v17 = sub_B8BE90(v16);
      v18 = *(_BYTE *)(v16 + 28) & 0x7F;
      if ( v18 == 47 )
      {
        v13 = v17 == 0;
        v14 = *(_QWORD *)(v16 + 48);
        if ( v13 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
            goto LABEL_5;
          if ( (*(_QWORD *)(v16 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( !(_BYTE)byte_2CCC440 && __cxa_guard_acquire(&byte_2CCC440) )
            {
              qword_2CCC460 &= 0xFFFFFFFE00000000LL;
              qword_2CCC468 = 0;
              qword_2CCC478 = 0;
              __cxa_guard_release(&byte_2CCC440);
            }
            v27 = *(_QWORD *)(v16 + 72) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v27 )
            {
              v28 = (__int64 *)(*(_QWORD *)(v16 + 72) & 0xFFFFFFFFFFFFFFF8LL);
              v31 = (*(__int64 *)(v16 + 72) >> 1) & 3;
              if ( v31 == 1 )
              {
                v32 = *(_QWORD *)(v27 + 72);
                v28 = nullptr;
                if ( !v32 )
                  goto LABEL_41;
                v28 = (__int64 *)(*(_QWORD *)(v27 + 72) & 0xFFFFFFFFFFFFFFF8LL);
                if ( ((v32 >> 1) & 3) != 2 || !v28 )
                  goto LABEL_41;
              }
              else if ( v31 != 2 )
              {
                goto LABEL_41;
              }
              v28 = (__int64 *)v28[1];
            }
            else
            {
              v28 = &qword_2CCC460;
            }
LABEL_41:
            if ( (unsigned __int8)sub_F1D5E0(v28) )
            {
LABEL_5:
              *(_BYTE *)(a1 + 23) |= 0x20u;
              v14 = *(_QWORD *)(v16 + 48);
            }
            else
            {
              v14 = *(_QWORD *)(v16 + 48);
            }
          }
        }
        v15 = sub_F57E80(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL));
        if ( !v15 || *(_BYTE *)(v15 + 16) != 16 || !*(_QWORD *)(v15 + 32) )
          goto LABEL_10;
        goto LABEL_9;
      }
      if ( v18 != 68 )
      {
        if ( !v17
          && (*(_QWORD *)(v16 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0
          && (v30 = sub_A5EDD0(v16), (unsigned __int8)sub_F1D5E0(v30))
          || (v26 = *(_BYTE *)(v16 + 60), (v26 & 4) != 0) && v16 != -80 && (**(_DWORD **)(v16 + 80) & 0x4000) != 0 )
        {
          *(_BYTE *)(a1 + 23) |= 0x20u;
          v26 = *(_BYTE *)(v16 + 60);
        }
        if ( (v26 & 2) == 0 )
          goto LABEL_10;
LABEL_9:
        *(_BYTE *)(a1 + 23) |= 0x80u;
        goto LABEL_10;
      }
      if ( v17 )
        goto LABEL_10;
      v19 = *(_QWORD *)(v16 + 56);
      v20 = *(_BYTE *)(v19 + 23);
      if ( (v20 & 0x20) != 0 )
        goto LABEL_29;
      if ( v20 < 0 )
      {
        v21 = v19 + 24;
        v22 = v19 + 24 + 8LL * (*(_DWORD *)(v19 + 20) & 0x1FFFFFFF);
        if ( v19 + 24 != v22 )
        {
          do
          {
            v23 = *(_QWORD *)(v22 - 8);
            if ( (*(_BYTE *)(v23 + 29) & 2) == 0 )
              break;
            if ( (*(_BYTE *)(v23 + 28) & 0x7F) == 0x43
              && (*(_BYTE *)(v23 + 60) & 4) != 0
              && v23 != -80
              && (**(_DWORD **)(v23 + 80) & 0x4000) != 0 )
            {
              goto LABEL_29;
            }
            v22 -= 8;
          }
          while ( v21 != v22 );
        }
      }
      if ( (*(_QWORD *)(v16 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_10;
      if ( !(_BYTE)byte_2CCC408 && __cxa_guard_acquire(&byte_2CCC408) )
      {
        qword_2CCC420 &= 0xFFFFFFFE00000000LL;
        qword_2CCC428 = 0;
        qword_2CCC438 = 0;
        __cxa_guard_release(&byte_2CCC408);
      }
      v24 = *(_QWORD *)(v16 + 72) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v24 )
      {
        v25 = &qword_2CCC420;
        goto LABEL_28;
      }
      v25 = (__int64 *)(*(_QWORD *)(v16 + 72) & 0xFFFFFFFFFFFFFFF8LL);
      v33 = (*(__int64 *)(v16 + 72) >> 1) & 3;
      if ( v33 == 1 )
      {
        v34 = *(_QWORD *)(v24 + 72);
        v25 = nullptr;
        if ( v34 )
        {
          v25 = (__int64 *)(*(_QWORD *)(v24 + 72) & 0xFFFFFFFFFFFFFFF8LL);
          if ( ((v34 >> 1) & 3) == 2 )
          {
            if ( v25 )
LABEL_64:
              v25 = (__int64 *)v25[1];
          }
        }
      }
      else if ( v33 == 2 )
      {
        goto LABEL_64;
      }
LABEL_28:
      if ( (unsigned __int8)sub_F1D5E0(v25) )
LABEL_29:
        *(_BYTE *)(a1 + 23) |= 0x20u;
LABEL_10:
      v8 = *(_DWORD *)(a1 + 20) & 0x1FFFFFFF;
    }
  }
  result = *(unsigned __int8 *)(a1 + 23);
  if ( (result & 0x40) != 0 )
  {
    if ( (*a8 & 0x4000) != 0 )
    {
      result = (unsigned int)result | 0x20;
      *(_BYTE *)(a1 + 23) = result;
    }
    *(_QWORD *)(a1 + 8 * v8 + 24) = a8;
  }
  return result;
}
