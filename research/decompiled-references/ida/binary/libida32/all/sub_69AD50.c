__int64 __fastcall sub_69AD50(__int64 a1, __int64 *a2, __int64 a3, const char *a4)
{
  __int64 idati; // rbx
  char *v5; // rax
  const char *v6; // rax
  __int64 *tinfo_property; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r14
  const char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v16; // [rsp+10h] [rbp-80h] BYREF
  char *v17; // [rsp+18h] [rbp-78h] BYREF
  void *ptr; // [rsp+20h] [rbp-70h] BYREF
  __int128 v19; // [rsp+28h] [rbp-68h]
  _QWORD v20[2]; // [rsp+40h] [rbp-50h] BYREF
  __int16 v21; // [rsp+50h] [rbp-40h]
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  idati = a3;
  v22 = __readfsqword(0x28u);
  if ( !a3 )
    idati = *(_QWORD *)(a1 + 8);
  if ( a2 )
    clear_tinfo_t(a2);
  v19 = 0;
  v16 = 0;
  ptr = nullptr;
  if ( !(unsigned int)sub_632230(a1, idati, a4, 2, (const char **)&v17, 0, 0, 0, 0, nullptr) )
    goto LABEL_27;
  v5 = v17++;
  if ( *v5 != 61 || !(unsigned __int8)sub_54DE00((__int64)&ptr, &v17) )
    goto LABEL_27;
  v6 = haystack;
  if ( !(_QWORD)v19 )
  {
    if ( haystack )
      goto LABEL_10;
LABEL_27:
    v13 = -1;
    goto LABEL_23;
  }
  v6 = (const char *)ptr;
  if ( !ptr )
    goto LABEL_27;
LABEL_10:
  v20[1] = v6;
  v21 = 256;
  if ( !idati )
    idati = get_idati(&ptr, &v17);
  v20[0] = idati;
  if ( !(unsigned __int8)create_tinfo(&v16, 61, 61, v20) )
    goto LABEL_27;
  if ( (get_tinfo_property(v16, 2) & 0x3F) != 0x2D )
    goto LABEL_27;
  tinfo_property = (__int64 *)get_tinfo_property(v16, 310);
  v8 = tinfo_property[1];
  if ( !v8 )
    goto LABEL_27;
  v9 = *tinfo_property;
  v10 = 0;
  while ( 1 )
  {
    v11 = haystack;
    if ( *(_QWORD *)(v9 + 8) )
      v11 = *(const char **)v9;
    if ( !strcmp(v11, a4) )
      break;
    ++v10;
    v9 += 56;
    if ( v8 == v10 )
      goto LABEL_27;
  }
  if ( a2 )
  {
    v12 = v16;
    v16 = *a2;
    *a2 = v12;
  }
  v13 = v10;
LABEL_23:
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  clear_tinfo_t(&v16);
  return v13;
}

