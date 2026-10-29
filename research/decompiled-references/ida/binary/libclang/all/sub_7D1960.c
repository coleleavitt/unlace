__int64 __fastcall sub_7D1960(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, int a7, __int64 a8)
{
  unsigned int v9; // r9d
  __int64 i; // rbp
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // al
  char v17; // dl
  __int64 v18; // rax
  char v19; // dl
  __int64 j; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __int64 *v23; // rdi
  __int64 v24; // rax
  char v25; // al
  __int64 result; // rax
  unsigned __int64 v27; // rdi
  __int64 *v28; // rdi
  unsigned __int64 v29; // rdi
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax

  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 12) = a4;
  *(_DWORD *)(a1 + 16) = a7;
  *(_DWORD *)(a1 + 20) = a6 & 0x1FFFFFFF | ((a8 != 0) << 30);
  v9 = a6 & 0x1FFFFFFF;
  if ( v9 )
  {
    for ( i = 0; (unsigned int)i < v9; ++i )
    {
      v15 = *(_QWORD *)(a5 + 8 * i);
      *(_QWORD *)(a1 + 8 * i + 24) = v15;
      v16 = sub_798420(v15, a2);
      v17 = *(_BYTE *)(v15 + 28) & 0x7F;
      if ( v17 == 45 )
      {
        v12 = v16 == 0;
        v13 = *(_QWORD *)(v15 + 48);
        if ( v12 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
            goto LABEL_5;
          if ( *(_QWORD *)(v15 + 72) > 7u )
          {
            if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
            {
              LODWORD(qword_4AD2160[0]) = 0;
              qword_4AD2160[1] = 0;
              qword_4AD2160[3] = 0;
              __cxa_guard_release(&qword_4AD2140);
            }
            v27 = *(_QWORD *)(v15 + 72);
            if ( v27 > 7 )
            {
              v28 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
              v32 = *(_QWORD *)(v15 + 72) & 6LL;
              if ( v32 == 2 )
              {
                v33 = v28[9];
                v28 = nullptr;
                if ( !v33 )
                  goto LABEL_47;
                v28 = (__int64 *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v33 & 6) != 4 || !v28 )
                  goto LABEL_47;
              }
              else if ( v32 != 4 )
              {
                goto LABEL_47;
              }
              v28 = (__int64 *)v28[1];
              goto LABEL_47;
            }
            v28 = qword_4AD2160;
LABEL_47:
            if ( (unsigned __int8)sub_AFD840(v28) )
            {
LABEL_5:
              *(_BYTE *)(a1 + 23) |= 0x20u;
              v13 = *(_QWORD *)(v15 + 48);
            }
            else
            {
              v13 = *(_QWORD *)(v15 + 48);
            }
          }
        }
        v14 = sub_B07C80(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
        if ( !v14 || *(_BYTE *)(v14 + 16) != 16 || !*(_QWORD *)(v14 + 32) )
          goto LABEL_10;
        goto LABEL_9;
      }
      if ( v17 != 66 )
      {
        if ( !v16 && *(_QWORD *)(v15 + 72) > 7u )
        {
          if ( !(_BYTE)qword_4AD2180 && __cxa_guard_acquire(&qword_4AD2180) )
          {
            LODWORD(qword_4AD21A0[0]) = 0;
            qword_4AD21A0[1] = 0;
            qword_4AD21A0[3] = 0;
            __cxa_guard_release(&qword_4AD2180);
          }
          v29 = *(_QWORD *)(v15 + 72);
          if ( v29 <= 7 )
          {
            v30 = qword_4AD21A0;
          }
          else
          {
            v30 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
            v31 = *(_QWORD *)(v15 + 72) & 6LL;
            if ( v31 == 2 )
            {
              v35 = v30[9];
              v30 = nullptr;
              if ( v35 )
              {
                v30 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v35 & 6) == 4 )
                {
                  if ( v30 )
                    goto LABEL_75;
                }
              }
            }
            else
            {
              if ( v31 != 4 )
                goto LABEL_54;
LABEL_75:
              v30 = (__int64 *)v30[1];
            }
          }
LABEL_54:
          if ( (unsigned __int8)sub_AFD840(v30) )
            goto LABEL_32;
        }
        v25 = *(_BYTE *)(v15 + 60);
        if ( (v25 & 4) != 0 && (**(_DWORD **)(v15 + 80) & 0x4000) != 0 )
        {
LABEL_32:
          *(_BYTE *)(a1 + 23) |= 0x20u;
          v25 = *(_BYTE *)(v15 + 60);
        }
        if ( (v25 & 2) == 0 )
          goto LABEL_10;
LABEL_9:
        *(_BYTE *)(a1 + 23) |= 0x80u;
        goto LABEL_10;
      }
      if ( v16 )
        goto LABEL_10;
      v18 = *(_QWORD *)(v15 + 56);
      v19 = *(_BYTE *)(v18 + 23);
      if ( (v19 & 0x20) != 0 )
        goto LABEL_42;
      if ( v19 < 0 )
      {
        a2 = v18 + 24;
        for ( j = v18 + 24 + (unsigned int)(8 * *(_DWORD *)(v18 + 20)); a2 != j; j -= 8 )
        {
          v21 = *(_QWORD *)(j - 8);
          if ( (*(_BYTE *)(v21 + 29) & 2) == 0 )
            break;
          if ( (*(_BYTE *)(v21 + 28) & 0x7F) == 0x41
            && (*(_BYTE *)(v21 + 60) & 4) != 0
            && (**(_DWORD **)(v21 + 80) & 0x4000) != 0 )
          {
            goto LABEL_42;
          }
        }
      }
      if ( *(_QWORD *)(v15 + 72) <= 7u )
        goto LABEL_10;
      if ( !(_BYTE)qword_4AD2108 && __cxa_guard_acquire(&qword_4AD2108) )
      {
        LODWORD(qword_4AD2120[0]) = 0;
        qword_4AD2120[1] = 0;
        qword_4AD2120[3] = 0;
        __cxa_guard_release(&qword_4AD2108);
      }
      v22 = *(_QWORD *)(v15 + 72);
      if ( v22 <= 7 )
      {
        v23 = qword_4AD2120;
      }
      else
      {
        v23 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
        v24 = *(_QWORD *)(v15 + 72) & 6LL;
        if ( v24 != 2 )
        {
          if ( v24 != 4 )
            goto LABEL_41;
LABEL_28:
          v23 = (__int64 *)v23[1];
          goto LABEL_41;
        }
        v34 = v23[9];
        v23 = nullptr;
        if ( v34 )
        {
          v23 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v34 & 6) == 4 )
          {
            if ( v23 )
              goto LABEL_28;
          }
        }
      }
LABEL_41:
      if ( (unsigned __int8)sub_AFD840(v23) )
LABEL_42:
        *(_BYTE *)(a1 + 23) |= 0x20u;
LABEL_10:
      v9 = *(_DWORD *)(a1 + 20) & 0x1FFFFFFF;
    }
  }
  result = *(unsigned __int8 *)(a1 + 23);
  if ( (result & 0x40) != 0 )
  {
    if ( (*(_BYTE *)(a8 + 1) & 0x40) != 0 )
    {
      result = (unsigned int)result | 0x20;
      *(_BYTE *)(a1 + 23) = result;
    }
    *(_QWORD *)(a1 + 8LL * v9 + 24) = a8;
  }
  return result;
}

