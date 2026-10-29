unsigned __int64 __fastcall sub_4DEE30(__int64 *a1, const char *a2)
{
  unsigned __int64 v2; // r12
  QT::QWidget *v4; // rbp
  int v5; // eax
  unsigned __int64 v6; // r15
  int v7; // eax
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+10h] [rbp-158h] BYREF
  __int128 v13; // [rsp+18h] [rbp-150h]
  __int64 v14; // [rsp+28h] [rbp-140h] BYREF
  __int128 v15; // [rsp+30h] [rbp-138h]
  __int128 v16; // [rsp+40h] [rbp-128h]
  __int128 v17; // [rsp+50h] [rbp-118h]
  __int128 v18; // [rsp+60h] [rbp-108h]
  int v19; // [rsp+70h] [rbp-F8h]
  __int64 v20; // [rsp+78h] [rbp-F0h]
  __int64 v21; // [rsp+80h] [rbp-E8h]
  __int64 v22; // [rsp+88h] [rbp-E0h]
  __int64 *v23; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+98h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-C8h]
  __int64 v26; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-B0h]
  __int128 v28; // [rsp+C8h] [rbp-A0h]
  __int128 v29; // [rsp+D8h] [rbp-90h]
  __int128 v30; // [rsp+E8h] [rbp-80h]
  int v31; // [rsp+F8h] [rbp-70h]
  __int64 v32; // [rsp+100h] [rbp-68h]
  __int64 v33; // [rsp+108h] [rbp-60h]
  __int64 v34; // [rsp+110h] [rbp-58h]
  unsigned __int64 v35; // [rsp+118h] [rbp-50h]
  unsigned __int64 v36; // [rsp+128h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v2 = (unsigned __int64)a2;
  if ( !sub_4D8990(a1 + 141, (unsigned __int64)a2) )
  {
    v4 = nullptr;
    v5 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 288))(a1);
    v13 = 0;
    v6 = v5;
    v15 = 0;
    v12 = 0;
    v14 = 0;
    v19 = -1;
    v20 = 12;
    v21 = -1;
    v22 = -1;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( v5 )
    {
      a2 = nullptr;
      v12 = qvector_reserve(&v12, 0, v5, 24);
      if ( *((_QWORD *)&v15 + 1) < v6 )
      {
        a2 = (const char *)v14;
        v14 = qvector_reserve(&v14, v14, v6, 16);
      }
    }
    if ( (a1[210] & 2) == 0 )
    {
      if ( *(_BYTE *)(qword_8D2358 + 80) )
      {
        if ( a1 )
        {
          v10 = qword_8D1E60;
          v11 = qword_8D1E60 + 16 * xmmword_8D1E68;
          if ( qword_8D1E60 != v11 )
          {
            while ( a1 != *(__int64 **)(v10 + 8) )
            {
              v10 += 16;
              if ( v11 == v10 )
                goto LABEL_28;
            }
            if ( v10 )
              v4 = *(QT::QWidget **)v10;
          }
        }
        else
        {
          v4 = nullptr;
        }
LABEL_28:
        QT::QWidget::update(v4);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 288))(a1);
        v8 = v7;
        v23 = a1 + 141;
        v25 = 0;
        v27 = 0;
        v24 = 0;
        v26 = 0;
        v31 = -1;
        v32 = 12;
        v33 = -1;
        v34 = -1;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        if ( v7 )
        {
          v24 = qvector_reserve(&v24, 0, v7, 24);
          if ( *((_QWORD *)&v27 + 1) < v8 )
            v26 = qvector_reserve(&v26, v26, v8, 16);
        }
        v9 = *a1;
        v35 = v8;
        a2 = (const char *)&v23;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 **, unsigned __int64))(v9 + 112))(a1, &v23, v2) )
        {
          a2 = (const char *)v2;
          sub_4DB7C0((__int64)(a1 + 141), v2, (__int64)&v23);
        }
        if ( (_QWORD)v28 )
        {
          *((_QWORD *)&v28 + 1) = 0;
          qfree(v28, a2);
        }
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v26, a2);
        }
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree(v24, a2);
        }
      }
    }
    if ( (_QWORD)v16 )
    {
      *((_QWORD *)&v16 + 1) = 0;
      qfree(v16, a2);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, a2);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12, a2);
    }
  }
  return v36 - __readfsqword(0x28u);
}
