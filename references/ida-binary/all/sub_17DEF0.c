__int64 __fastcall sub_17DEF0(__int64 a1, const char *a2, const char *a3)
{
  __int64 v5; // rdi
  const char *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  size_t v9; // r15
  __int64 v10; // rdx
  size_t v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  size_t v14; // r13
  __int64 v15; // rdx
  size_t v16; // rax
  __int64 v17; // rdx
  size_t v18; // rax
  __int64 v19; // rdx
  size_t v20; // rax
  __int64 v21; // rbx
  const char *v22; // r12
  size_t v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  const char *v32; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+8h] [rbp-A0h]
  _QWORD v34[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v35; // [rsp+30h] [rbp-78h]
  __int128 v36; // [rsp+38h] [rbp-70h]
  char v37; // [rsp+48h] [rbp-60h]
  _BYTE v38[5]; // [rsp+5Eh] [rbp-4Ah] BYREF
  _BYTE v39[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v40[8]; // [rsp+68h] [rbp-40h] BYREF

  v40[0] = __readfsqword(0x28u);
  v32 = nullptr;
  *(_QWORD *)a1 = 0;
  v33 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v5 = (__int64)a2;
    v6 = a2;
    v9 = strlen(a2);
    if ( HIDWORD(v9) )
    {
      sub_179E50(0.0, (__int64)a2, (__int64)a2, v7, v8);
      goto LABEL_38;
    }
    v10 = (unsigned int)v9;
  }
  else
  {
    v10 = 0;
    v9 = 0;
    v6 = (const char *)&unk_5C2F25;
  }
  a2 = v39;
  v11 = pack_dd(v38, v39, v10) - (_QWORD)v38;
  if ( v11 )
  {
    a2 = v38;
    sub_17A950((__int64 *)a1, v38, v11);
  }
  if ( v9 )
  {
    a2 = v6;
    sub_17A950((__int64 *)a1, v6, v9);
    if ( a3 )
    {
LABEL_8:
      v5 = (__int64)a3;
      v14 = strlen(a3);
      if ( !HIDWORD(v14) )
      {
        v15 = (unsigned int)v14;
        goto LABEL_10;
      }
LABEL_38:
      sub_179E50(0.0, v5, (__int64)a2, v12, v13);
    }
  }
  else if ( a3 )
  {
    goto LABEL_8;
  }
  v15 = 0;
  v14 = 0;
  a3 = (const char *)&unk_5C2F25;
LABEL_10:
  v16 = pack_dd(v38, v39, v15) - (_QWORD)v38;
  if ( v16 )
    sub_17A950((__int64 *)a1, v38, v16);
  if ( v14 )
    sub_17A950((__int64 *)a1, a3, v14);
  v17 = -1;
  if ( qword_8CF010 )
    v17 = *(_QWORD *)(*((_QWORD *)qword_8CF010 + 87) + 168LL);
  v18 = pack_dq(v38, v40, v17) - (_QWORD)v38;
  if ( v18 )
    sub_17A950((__int64 *)a1, v38, v18);
  v19 = -1;
  if ( qword_8CF010 )
    v19 = *(_QWORD *)(*((_QWORD *)qword_8CF010 + 87) + 184LL);
  v20 = pack_dq(v38, v40, v19) - (_QWORD)v38;
  if ( v20 )
    sub_17A950((__int64 *)a1, v38, v20);
  v21 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
  (*(void (__fastcall **)(_QWORD *, const char **, __int64))(QT::QCoreApplication::self[2] + 64LL))(
    QT::QCoreApplication::self + 2,
    &v32,
    v21);
  v22 = &s1;
  if ( (_QWORD)v33 )
    v22 = v32;
  if ( v22 )
  {
    v23 = strlen(v22) + 1;
  }
  else
  {
    v23 = 1;
    v22 = (const char *)&unk_5C2F25;
  }
  sub_17A950((__int64 *)a1, v22, v23);
  QT::QEvent::QEvent(v34, 2003);
  v24 = v34;
  v37 = 1;
  v36 = 0;
  v34[0] = ISerializedPositionEvent___vtable;
  v35 = nullptr;
  sub_51B5E0(v21, v34);
  v27 = v36;
  if ( (_QWORD)v36 )
  {
    v24 = v35;
    sub_17A950((__int64 *)a1, v35, v36);
  }
  v34[0] = ISerializedPositionEvent___vtable;
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v24, v27, v25, v26);
  }
  QT::QEvent::~QEvent((QT::QEvent *)v34);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v24, v28, v29, v30);
  }
  return a1;
}
