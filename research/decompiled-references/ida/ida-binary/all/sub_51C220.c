unsigned __int64 __fastcall sub_51C220(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  const char *v6; // r12
  const char *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  char *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 *v16; // rdx
  __int64 v17; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  sub_534680(&qword_8D23B0, &off_86D8A0, 6, 0);
  sub_539A10(a2, &qword_8D23B0);
  v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89B360, *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL));
  if ( v3 )
  {
    if ( !*(_BYTE *)(v3 + 96) )
    {
      v4 = *(_QWORD *)(v3 + 88);
      if ( v4 )
      {
        v5 = sub_4E0E80(v4);
        v6 = (const char *)v5;
        if ( v5 )
        {
          sub_51BDD0(a2, v5, "All ", -1);
          sub_51BDD0(a2, (__int64)v6, "Visible columns only", -2);
          sub_51BDD0(a2, (__int64)v6, "None", -3);
          sub_5392E0(a2, "Column/", 1);
          v7 = (const char *)&v19;
          v19 = 0;
          v20 = 0;
          (*(void (__fastcall **)(const char *, __int64 *, _QWORD))(*(_QWORD *)v6 + 248LL))(v6, &v19, 0);
          v8 = v20;
          if ( !(_QWORD)v20 )
          {
            v13 = v19;
            if ( !v19 )
              return v21 - __readfsqword(0x28u);
            goto LABEL_16;
          }
          v9 = 0;
          do
          {
            v10 = v19 + 24 * v9;
            v11 = (char *)&s1;
            if ( *(_QWORD *)(v10 + 8) )
              v11 = *(char **)v10;
            v7 = v6;
            sub_51BDD0(a2, (__int64)v6, v11, v9++);
          }
          while ( v9 != v8 );
          v12 = v19;
          v13 = v19;
          if ( v19 )
          {
            v14 = v20;
            if ( (_QWORD)v20 )
            {
              v15 = 0;
              do
              {
                v16 = (__int64 *)(v12 + 24 * v15);
                v17 = *v16;
                if ( *v16 )
                {
                  v16[1] = 0;
                  qfree(v17, v6);
                  v12 = v19;
                }
                ++v15;
                v13 = v12;
              }
              while ( v14 != v15 );
            }
LABEL_16:
            *(_QWORD *)&v20 = 0;
            qfree(v13, v7);
          }
        }
      }
    }
  }
  return v21 - __readfsqword(0x28u);
}
