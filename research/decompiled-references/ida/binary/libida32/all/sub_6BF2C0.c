_QWORD *__fastcall sub_6BF2C0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rax
  char v10; // dl
  const char *v11; // rcx
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v12 = 0;
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    goto LABEL_7;
  v5 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v5 )
    goto LABEL_7;
  if ( !(unsigned __int8)sub_F34520(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v7 = sub_A8AC40(a2[6], a3);
    v8 = *(unsigned __int16 *)(v5 + 18);
    LOWORD(v8) = (unsigned __int16)v8 >> 3;
    v9 = (unsigned int)(v8 + 77);
    LOWORD(v9) = v9 & 0x1FF;
    switch ( v9 )
    {
      case 0LL:
        *a1 = 1;
        goto LABEL_6;
      case 1LL:
        *a1 = 8;
        goto LABEL_6;
      case 2LL:
      case 5LL:
      case 13LL:
      case 14LL:
        *a1 = 50;
        goto LABEL_6;
      case 3LL:
        *a1 = 34;
        goto LABEL_6;
      case 4LL:
        sub_6BCF00((__int64 *)&ptr, a2, v7, 0);
        goto LABEL_11;
      case 6LL:
      case 7LL:
      case 16LL:
      case 18LL:
      case 19LL:
      case 20LL:
      case 45LL:
      case 62LL:
        v10 = 1;
        goto LABEL_10;
      case 8LL:
      case 10LL:
      case 11LL:
      case 12LL:
      case 51LL:
        v10 = 0;
LABEL_10:
        sub_6B8A00(&ptr, v7, v10);
        goto LABEL_11;
      case 9LL:
        *a1 = 39;
        goto LABEL_6;
      case 15LL:
        sub_6BCF00((__int64 *)&ptr, a2, v7, 1);
LABEL_11:
        copy_tinfo_t(&v12);
        clear_tinfo_t(&ptr);
        break;
      case 17LL:
        *a1 = 7;
        goto LABEL_6;
      case 46LL:
        *a1 = 9;
        goto LABEL_6;
      case 47LL:
        *a1 = 25;
        goto LABEL_6;
      case 48LL:
        *a1 = 41;
        goto LABEL_6;
      case 49LL:
      case 50LL:
        *a1 = 57;
        goto LABEL_6;
      case 53LL:
        sub_6B7DE0((__int64)&ptr, (__int64)a2, a3);
        v11 = haystack;
        if ( v15 )
          v11 = (const char *)ptr;
        sub_6BF080(&v13, (__int64)a2, (__int64 *)a3, v11);
        copy_tinfo_t(&v12);
        clear_tinfo_t(&v13);
        if ( ptr )
        {
          v15 = 0;
          qfree(ptr);
        }
        goto LABEL_5;
      case 54LL:
        sub_6BC100((__int64)a2, &v12, "id");
        break;
      case 55LL:
        sub_6BC100((__int64)a2, &v12, "Class");
        break;
      case 56LL:
        sub_6BC100((__int64)a2, &v12, "SEL");
        break;
      default:
        break;
    }
  }
  if ( !(_BYTE)v12 )
LABEL_7:
    sub_6BAAB0(a2, nullptr, a3);
LABEL_5:
  *a1 = 0;
  copy_tinfo_t(a1);
LABEL_6:
  clear_tinfo_t(&v12);
  return a1;
}

