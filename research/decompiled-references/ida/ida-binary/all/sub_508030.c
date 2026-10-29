__int64 __fastcall sub_508030(const char *a1, const char *a2, char *a3, int a4, char *a5, const __m128i *a6)
{
  const char *v6; // rax
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-B0h]
  __int64 v11; // [rsp+40h] [rbp-A8h]
  __int64 v12; // [rsp+50h] [rbp-98h]
  __int64 v13; // [rsp+58h] [rbp-90h]
  __int64 v14; // [rsp+68h] [rbp-80h]
  __int64 v15; // [rsp+70h] [rbp-78h]
  __int64 v16; // [rsp+80h] [rbp-68h]
  __int64 v17; // [rsp+88h] [rbp-60h]
  __int64 v18; // [rsp+98h] [rbp-50h]
  __int64 v19; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v20; // [rsp+D8h] [rbp-10h]

  v6 = a1;
  v20 = __readfsqword(0x28u);
  if ( !a1 )
    v6 = (const char *)&unk_5C2F25;
  if ( !a2 )
    a2 = (const char *)&unk_5C2F25;
  if ( !a3 )
    a3 = (char *)&unk_5C2F25;
  sub_4C0490((__int64)v9, "Please confirm", 2, 0, v6, a2, a3, a4, a5, a6);
  v7 = sub_4797E0((__int64)v9, 2, 0);
  v9[0] = message_box_request_t___vtable;
  if ( v18 )
  {
    v19 = 0;
    qfree(v18, (_BYTE *)&dword_0 + 2);
  }
  if ( v16 )
  {
    v17 = 0;
    qfree(v16, (_BYTE *)&dword_0 + 2);
  }
  if ( v14 )
  {
    v15 = 0;
    qfree(v14, (_BYTE *)&dword_0 + 2);
  }
  if ( v12 )
  {
    v13 = 0;
    qfree(v12, (_BYTE *)&dword_0 + 2);
  }
  if ( v10 )
  {
    v11 = 0;
    qfree(v10, (_BYTE *)&dword_0 + 2);
  }
  v9[0] = &off_86FF78;
  qsem_free(v9[2]);
  return v7;
}
