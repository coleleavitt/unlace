char __fastcall sub_1669B40(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  const char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  char v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdi
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD v35[19]; // [rsp+0h] [rbp-98h] BYREF

  if ( (_BYTE)byte_2CD8B40 || !__cxa_guard_acquire(&byte_2CD8B40) )
  {
    LOBYTE(v4) = sub_B8EC80(a2);
    if ( !(_BYTE)v4 )
      return v4;
  }
  else
  {
    v35[1] = 8;
    v35[0] = "auto_ptr";
    v35[2] = "shared_ptr";
    v35[4] = "unique_ptr";
    v35[6] = "exception_ptr";
    v35[8] = "coroutine_handle";
    v35[10] = "function";
    v35[12] = "move_only_function";
    v35[3] = 10;
    v35[5] = 10;
    v35[7] = 13;
    v35[9] = 16;
    v35[11] = 8;
    v35[13] = 18;
    sub_1668FC0((__int64)&unk_2CD8B50, v35, 7);
    __cxa_atexit((void (*)(void *))sub_1068DE0, &unk_2CD8B50, &off_2B25620);
    __cxa_guard_release(&byte_2CD8B40);
    LOBYTE(v4) = sub_B8EC80(a2);
    if ( !(_BYTE)v4 )
      return v4;
  }
  v5 = sub_995750(a2);
  LOBYTE(v4) = sub_1668F10((__int64)&unk_2CD8B50, (__int64)v5, v6);
  if ( (_BYTE)v4 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    {
LABEL_8:
      v11 = a2;
      v12 = 0;
      while ( 1 )
      {
        v13 = sub_B31B00(*(_QWORD *)(a1 + 248), 0);
        sub_B8CC60(v11, v13, v14, v15, v16, v17);
        v4 = *(_QWORD *)(v11 + 96);
        if ( (v4 & 1) != 0 )
        {
          if ( v12 )
            return v4;
          v20 = v4 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_17;
        }
        if ( (v4 & 2) != 0 )
        {
          if ( v12 )
            return v4;
          v24 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
          v12 = 1;
          if ( v24 )
          {
            v25 = v24[2295];
            if ( v25 )
            {
              v26 = v24[294];
              v24[304] += 24LL;
              v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v24[295] >= v27 + 24 && v26 )
              {
                v24[294] = v27 + 24;
                v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v28 = sub_986170((__int64)(v24 + 294), 24, 24, 3, v18, v19);
                v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v28 = v25;
              v29 = v27 | 4;
              *(_DWORD *)(v28 + 8) = 0;
              *(_QWORD *)(v28 + 16) = v11;
            }
            else
            {
              v29 = v11 & 0xFFFFFFFFFFFFFFFBLL;
            }
            v20 = v29 & 0xFFFFFFFFFFFFFFFELL;
            v4 = v20 | 1;
            *(_QWORD *)(v11 + 96) = v20 | 1;
LABEL_17:
            v4 &= 0xFFFFFFFFFFFFFFF8LL;
            v12 = 1;
            v21 = v4;
            if ( v20 && (v20 & 4) != 0 && v4 )
            {
              v22 = *(_QWORD *)v4;
              v23 = *(_DWORD *)(*(_QWORD *)v4 + 12LL);
              if ( *(_DWORD *)(v21 + 8) != v23 )
              {
                *(_DWORD *)(v21 + 8) = v23;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 152LL))(v22, v11);
              }
              v4 = *(_QWORD *)(v21 + 16);
              v12 = 1;
            }
            goto LABEL_12;
          }
        }
        else
        {
          v4 &= 0xFFFFFFFFFFFFFFFCLL;
          if ( v4 )
            goto LABEL_12;
        }
        v4 = 0;
LABEL_12:
        if ( a2 != v4 )
        {
          v11 = v4;
          if ( v4 )
            continue;
        }
        return v4;
      }
    }
    v30 = sub_B8C3D0(a2, (__int64)v5, v7, v8, v9, v10);
    v31 = *v30;
    v32 = *v30 + 8LL * *((unsigned int *)v30 + 2);
    if ( *v30 < v32 )
    {
      v4 = *v30;
      while ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 89 )
      {
        v4 += 8;
        if ( v32 == v4 )
          goto LABEL_8;
      }
      if ( v32 == v4 )
        goto LABEL_8;
    }
    else
    {
      if ( v31 == v32 )
        goto LABEL_8;
      v4 = *(_QWORD *)v32;
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 89 )
      {
        v4 = v32 + 8;
        while ( v31 != v4 )
        {
          v33 = *(_QWORD *)v4;
          v4 += 8;
          if ( *(_WORD *)(v33 + 36) == 89 )
            return v4;
        }
        goto LABEL_8;
      }
    }
  }
  return v4;
}
