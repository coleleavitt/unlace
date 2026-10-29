__int64 __fastcall sub_11050(__int64 a1, time_t a2)
{
  struct tm *v2; // rcx
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // rbp
  void *v6; // rax
  _BYTE *v8; // rax
  time_t timer; // [rsp+8h] [rbp-60h] BYREF
  char s[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  timer = a2;
  v11 = __readfsqword(0x28u);
  if ( (unsigned __int64)(a2 + 1) <= 1 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v8 = (_BYTE *)sub_29E60(a1, 0, 1, 1);
LABEL_6:
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = 1;
    *v8 = 0;
    return a1;
  }
  v2 = gmtime(&timer);
  if ( !v2 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v8 = (_BYTE *)sub_29E60(a1, 0, 1, 1);
    goto LABEL_6;
  }
  strftime(s, 0x20u, "%Y-%m-%dT%H:%M:%SZ", v2);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = strlen(s);
  v4 = v3 + 1;
  v5 = v3;
  v6 = (void *)sub_29E60(a1, 0, v3 + 1, 1);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v4;
  memmove(v6, s, v5);
  *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
  return a1;
}

