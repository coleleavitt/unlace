_QWORD *__fastcall sub_2161F20(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v6; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v7[4]; // [rsp+18h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a2;
  if ( !*a2 )
    goto LABEL_7;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v3 + 48LL))(v3, &unk_2CFF001) )
  {
    v3 = (_QWORD *)*a2;
LABEL_7:
    *a1 = v3;
    *a2 = 0;
    return a1;
  }
  v4 = (_QWORD *)*a2;
  *a2 = 0;
  v6 = v4;
  sub_A05760(v7, &v6);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
  *a1 = 0;
  return a1;
}
