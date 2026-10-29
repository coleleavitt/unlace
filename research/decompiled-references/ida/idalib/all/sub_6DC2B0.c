__int64 __fastcall sub_6DC2B0(__int64 a1, __int64 *a2, const char *a3)
{
  _QWORD *v4; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  const char *v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  int named_type; // eax
  __int64 v16; // rdx
  unsigned __int8 v18; // bl
  __int64 idati; // rax
  char *v20; // rcx
  const void *v21; // r8
  void *v22; // rax
  void *v23; // rax
  const char *src; // [rsp+0h] [rbp-B0h]
  void *srca; // [rsp+0h] [rbp-B0h]
  _BYTE *v26; // [rsp+10h] [rbp-A0h] BYREF
  _QWORD v27[2]; // [rsp+18h] [rbp-98h] BYREF
  __int16 v28; // [rsp+28h] [rbp-88h]
  void *ptr; // [rsp+38h] [rbp-78h] BYREF
  __int128 v30; // [rsp+40h] [rbp-70h]
  void *dest; // [rsp+50h] [rbp-60h] BYREF
  __int128 v32; // [rsp+58h] [rbp-58h]
  _QWORD v33[9]; // [rsp+68h] [rbp-48h] BYREF

  v4 = *(_QWORD **)(a1 + 8);
  v33[1] = __readfsqword(0x28u);
  v30 = 0;
  ptr = nullptr;
  dest = nullptr;
  v33[0] = 0;
  v32 = 0;
  if ( (*v4 & 0x100LL) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 392);
    v7 = v6 + (*(_QWORD *)(a1 + 400) << 6);
    if ( v6 != v7 )
    {
      while ( 1 )
      {
        v8 = haystack;
        if ( *(_QWORD *)(v6 + 8) )
          v8 = *(const char **)v6;
        if ( !strcmp(v8, a3) )
          break;
        v6 += 64;
        if ( v7 == v6 )
          goto LABEL_17;
      }
      if ( v6 )
      {
        if ( (void **)v6 != &ptr )
        {
          v9 = *(_QWORD *)(v6 + 8);
          if ( v9 > 1 )
          {
            src = *(const char **)v6;
            v23 = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v6 + 8), 1);
            *(_QWORD *)&v30 = v9;
            ptr = v23;
            memmove(v23, src, v9 - 1);
            *((char *)ptr + v9 - 1) = 0;
          }
        }
        if ( &dest != (void **)(v6 + 24) )
        {
          v10 = *(_QWORD *)(v6 + 32);
          if ( v10 > 1 )
          {
            v21 = *(const void **)(v6 + 24);
            v22 = dest;
            if ( *((_QWORD *)&v32 + 1) < v10 )
            {
              srca = *(void **)(v6 + 24);
              v22 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v6 + 32), 1);
              v21 = srca;
              dest = v22;
            }
            *(_QWORD *)&v32 = v10;
            memmove(v22, v21, v10 - 1);
            *((char *)dest + v10 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v32 = 0;
          }
        }
        copy_tinfo_t(v33);
        v11 = v33[0];
        v12 = *a2;
        *a2 = v33[0];
        v33[0] = v12;
        if ( (get_tinfo_property(v11, 2) & 0x3F) != 0x2D
          || get_tinfo_property(*a2, 303)
          || (*((_BYTE *)a2 + 1) & 1) != 0 )
        {
          goto LABEL_16;
        }
        v20 = (char *)haystack;
        if ( (_QWORD)v32 )
          v20 = (char *)dest;
        if ( (unsigned __int8)sub_6DBDC0((_QWORD *)a1, (__int64)a2, a3, v20, 1, 0x2Du) )
        {
          sub_6D5A80((__int64 *)(a1 + 384), (__int64)a2, a3, dest, 2);
LABEL_16:
          v13 = 1;
          goto LABEL_21;
        }
        goto LABEL_20;
      }
    }
  }
LABEL_17:
  v14 = *(_QWORD *)(a1 + 16);
  v26 = nullptr;
  named_type = get_named_type(v14, (_DWORD)a3, 1, (unsigned int)&v26, 0, 0, 0, 0, 0);
  v16 = **(_QWORD **)(a1 + 8) & 0xFLL;
  if ( named_type == 1 || named_type == 2 && (*(_BYTE *)(a1 + 122) & 0x10) == 0 )
  {
    if ( v16 == 2 )
    {
      if ( (*v26 & 0xF) == 0xD )
      {
        v18 = *v26 & 0x3F;
        if ( !a3 )
          goto LABEL_20;
      }
      else
      {
        v18 = 61;
        if ( !a3 )
          goto LABEL_20;
      }
      goto LABEL_29;
    }
    v18 = 61;
    if ( a3 )
    {
LABEL_29:
      idati = *(_QWORD *)(a1 + 16);
      v27[1] = a3;
      v28 = 256;
      if ( !idati )
        idati = get_idati(v14, a3);
      v27[0] = idati;
      if ( (unsigned __int8)create_tinfo(a2, v18, 61, v27) )
        goto LABEL_16;
      if ( (**(_QWORD **)(a1 + 8) & 0xFuLL) - 3 <= 1 )
        goto LABEL_33;
LABEL_20:
      v13 = 0;
      goto LABEL_21;
    }
  }
  if ( (unsigned __int64)(v16 - 3) > 1 )
    goto LABEL_20;
LABEL_33:
  v13 = sub_6DBEE0((_QWORD *)a1, a2, (__int64)a3);
LABEL_21:
  clear_tinfo_t(v33);
  if ( dest )
  {
    *(_QWORD *)&v32 = 0;
    qfree(dest);
  }
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  return v13;
}
