unsigned __int64 sub_1C63B0()
{
  QT::QObject *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // r14
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // rax
  __int64 v78; // r14
  __int64 v79; // rax
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // r14
  __int64 v85; // rax
  __int64 v86; // r14
  __int64 v87; // rax
  _BYTE v88[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 (__fastcall *v89)(); // [rsp+10h] [rbp-58h] BYREF
  __int64 v90; // [rsp+18h] [rbp-50h]
  unsigned __int64 v91; // [rsp+28h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  if ( !qword_8CAF08 )
  {
    v1 = (QT::QObject *)operator new(0x10u);
    QT::QObject::QObject(v1, nullptr);
    qword_8CAF08 = (__int64)v1;
    QT::QObject::setObjectName(v1, "IDB Monitor Signal Connections", 30);
    v2 = sub_414310();
    v90 = 0;
    v3 = qword_8CAF08;
    v4 = v2;
    v89 = sub_4754B0;
    v5 = operator new(0x10u);
    *(_DWORD *)v5 = 1;
    *(_QWORD *)(v5 + 8) = sub_1C45E0;
    QT::QObject::connectImpl(v88, v4, &v89, v3, 0, v5, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v6 = qword_8CAF08;
    v90 = 0;
    v89 = sub_4754D0;
    v7 = operator new(0x10u);
    *(_DWORD *)v7 = 1;
    *(_QWORD *)(v7 + 8) = sub_1C4420;
    QT::QObject::connectImpl(v88, v4, &v89, v6, 0, v7, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v8 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475190;
    v9 = operator new(0x10u);
    *(_DWORD *)v9 = 1;
    *(_QWORD *)(v9 + 8) = sub_1C52F0;
    QT::QObject::connectImpl(v88, v4, &v89, v8, 0, v9, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v10 = qword_8CAF08;
    v90 = 0;
    v89 = sub_4754F0;
    v11 = operator new(0x10u);
    *(_DWORD *)v11 = 1;
    *(_QWORD *)(v11 + 8) = sub_1C4AA0;
    QT::QObject::connectImpl(v88, v4, &v89, v10, 0, v11, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v12 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475570;
    v13 = operator new(0x10u);
    *(_QWORD *)(v13 + 8) = sub_1C4BA0;
    *(_DWORD *)v13 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v12, 0, v13, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v14 = qword_8CAF08;
    v90 = 0;
    v89 = sub_4755D0;
    v15 = operator new(0x10u);
    *(_QWORD *)(v15 + 8) = sub_1C4BA0;
    *(_DWORD *)v15 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v14, 0, v15, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v16 = qword_8CAF08;
    v90 = 0;
    v89 = sub_474E10;
    v17 = operator new(0x10u);
    *(_QWORD *)(v17 + 8) = sub_1C4BA0;
    *(_DWORD *)v17 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v16, 0, v17, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v18 = qword_8CAF08;
    v90 = 0;
    v89 = sub_474E70;
    v19 = operator new(0x10u);
    *(_QWORD *)(v19 + 8) = sub_1C4B40;
    *(_DWORD *)v19 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v18, 0, v19, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v20 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475090;
    v21 = operator new(0x10u);
    *(_QWORD *)(v21 + 8) = sub_1C4B40;
    *(_DWORD *)v21 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v20, 0, v21, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v22 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475630;
    v23 = operator new(0x10u);
    *(_DWORD *)v23 = 1;
    *(_QWORD *)(v23 + 8) = sub_1C4A50;
    QT::QObject::connectImpl(v88, v4, &v89, v22, 0, v23, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v24 = qword_8CAF08;
    v90 = 0;
    v89 = sub_4756D0;
    v25 = operator new(0x10u);
    *(_DWORD *)v25 = 1;
    *(_QWORD *)(v25 + 8) = sub_1C4A00;
    QT::QObject::connectImpl(v88, v4, &v89, v24, 0, v25, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v26 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475740;
    v27 = operator new(0x10u);
    *(_QWORD *)(v27 + 8) = sub_1C49B0;
    *(_DWORD *)v27 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v26, 0, v27, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v28 = qword_8CAF08;
    v90 = 0;
    v89 = sub_4757B0;
    v29 = operator new(0x10u);
    *(_DWORD *)v29 = 1;
    *(_QWORD *)(v29 + 8) = sub_1C4AF0;
    QT::QObject::connectImpl(v88, v4, &v89, v28, 0, v29, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v30 = qword_8CAF08;
    v90 = 0;
    v89 = sub_474C10;
    v31 = operator new(0x10u);
    *(_QWORD *)(v31 + 8) = sub_1C44F0;
    *(_DWORD *)v31 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v30, 0, v31, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v32 = qword_8CAF08;
    v90 = 0;
    v89 = sub_474C70;
    v33 = operator new(0x10u);
    *(_DWORD *)v33 = 1;
    *(_QWORD *)(v33 + 8) = sub_1C4960;
    QT::QObject::connectImpl(v88, v4, &v89, v32, 0, v33, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v34 = qword_8CAF08;
    v90 = 0;
    v89 = sub_474CD0;
    v35 = operator new(0x10u);
    *(_QWORD *)(v35 + 8) = sub_1C44F0;
    *(_DWORD *)v35 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v34, 0, v35, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v36 = qword_8CAF08;
    v90 = 0;
    v89 = sub_474D30;
    v37 = operator new(0x10u);
    *(_QWORD *)(v37 + 8) = sub_1C49B0;
    *(_DWORD *)v37 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v36, 0, v37, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v38 = qword_8CAF08;
    v90 = 0;
    v89 = sub_474DA0;
    v39 = operator new(0x10u);
    *(_QWORD *)(v39 + 8) = sub_1C49B0;
    *(_DWORD *)v39 = 1;
    QT::QObject::connectImpl(v88, v4, &v89, v38, 0, v39, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v40 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475810;
    v41 = operator new(0x10u);
    *(_DWORD *)v41 = 1;
    *(_QWORD *)(v41 + 8) = sub_1C4540;
    QT::QObject::connectImpl(v88, v4, &v89, v40, 0, v41, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v42 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475860;
    v43 = operator new(0x10u);
    *(_DWORD *)v43 = 1;
    *(_QWORD *)(v43 + 8) = sub_1C4590;
    QT::QObject::connectImpl(v88, v4, &v89, v42, 0, v43, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v44 = qword_8CAF08;
    v90 = 0;
    v89 = (__int64 (__fastcall *)())sub_4758C0;
    v45 = operator new(0x10u);
    *(_DWORD *)v45 = 1;
    *(_QWORD *)(v45 + 8) = sub_1C48F0;
    QT::QObject::connectImpl(v88, v4, &v89, v44, 0, v45, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v46 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475990;
    v47 = operator new(0x10u);
    *(_DWORD *)v47 = 1;
    *(_QWORD *)(v47 + 8) = sub_1C4880;
    QT::QObject::connectImpl(v88, v4, &v89, v46, 0, v47, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v48 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475A20;
    v49 = operator new(0x10u);
    *(_DWORD *)v49 = 1;
    *(_QWORD *)(v49 + 8) = sub_1C4830;
    QT::QObject::connectImpl(v88, v4, &v89, v48, 0, v49, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v50 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475A80;
    v51 = operator new(0x10u);
    *(_DWORD *)v51 = 1;
    *(_QWORD *)(v51 + 8) = sub_1C4460;
    QT::QObject::connectImpl(v88, v4, &v89, v50, 0, v51, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v52 = qword_8CAF08;
    v90 = 0;
    v89 = sub_474B70;
    v53 = operator new(0x10u);
    *(_DWORD *)v53 = 1;
    *(_QWORD *)(v53 + 8) = sub_1C5280;
    QT::QObject::connectImpl(v88, v4, &v89, v52, 0, v53, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v54 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475AA0;
    v55 = operator new(0x18u);
    *(_DWORD *)v55 = 1;
    *(_QWORD *)(v55 + 8) = sub_1C51C0;
    QT::QObject::connectImpl(v88, v4, &v89, v54, 0, v55, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v56 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475B10;
    v57 = operator new(0x18u);
    *(_DWORD *)v57 = 1;
    *(_QWORD *)(v57 + 8) = sub_1C5110;
    QT::QObject::connectImpl(v88, v4, &v89, v56, 0, v57, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v58 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475B80;
    v59 = operator new(0x18u);
    *(_DWORD *)v59 = 1;
    *(_QWORD *)(v59 + 8) = sub_1C5060;
    QT::QObject::connectImpl(v88, v4, &v89, v58, 0, v59, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v60 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475C10;
    v61 = operator new(0x18u);
    *(_DWORD *)v61 = 1;
    *(_QWORD *)(v61 + 8) = sub_1C4FB0;
    QT::QObject::connectImpl(v88, v4, &v89, v60, 0, v61, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v62 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475CA0;
    v63 = operator new(0x18u);
    *(_DWORD *)v63 = 1;
    *(_QWORD *)(v63 + 8) = sub_1C4F00;
    QT::QObject::connectImpl(v88, v4, &v89, v62, 0, v63, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v64 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475D30;
    v65 = operator new(0x18u);
    *(_DWORD *)v65 = 1;
    *(_QWORD *)(v65 + 8) = sub_1C4E50;
    QT::QObject::connectImpl(v88, v4, &v89, v64, 0, v65, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v66 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475DA0;
    v67 = operator new(0x18u);
    *(_DWORD *)v67 = 1;
    *(_QWORD *)(v67 + 8) = sub_1C4DA0;
    QT::QObject::connectImpl(v88, v4, &v89, v66, 0, v67, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v68 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475E00;
    v69 = operator new(0x18u);
    *(_DWORD *)v69 = 1;
    *(_QWORD *)(v69 + 8) = sub_1C4CF0;
    QT::QObject::connectImpl(v88, v4, &v89, v68, 0, v69, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v70 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475E90;
    v71 = operator new(0x18u);
    *(_DWORD *)v71 = 1;
    *(_QWORD *)(v71 + 8) = sub_1C4C00;
    QT::QObject::connectImpl(v88, v4, &v89, v70, 0, v71, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v72 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475F40;
    v73 = operator new(0x10u);
    *(_DWORD *)v73 = 1;
    *(_QWORD *)(v73 + 8) = sub_1C47F0;
    QT::QObject::connectImpl(v88, v4, &v89, v72, 0, v73, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v74 = qword_8CAF08;
    v90 = 0;
    v89 = sub_475FA0;
    v75 = operator new(0x10u);
    *(_DWORD *)v75 = 1;
    *(_QWORD *)(v75 + 8) = sub_1C47B0;
    QT::QObject::connectImpl(v88, v4, &v89, v74, 0, v75, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v76 = qword_8CAF08;
    v90 = 0;
    v89 = sub_476010;
    v77 = operator new(0x10u);
    *(_DWORD *)v77 = 1;
    *(_QWORD *)(v77 + 8) = sub_1C4770;
    QT::QObject::connectImpl(v88, v4, &v89, v76, 0, v77, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v78 = qword_8CAF08;
    v90 = 0;
    v89 = sub_4760A0;
    v79 = operator new(0x10u);
    *(_DWORD *)v79 = 1;
    *(_QWORD *)(v79 + 8) = sub_1C4730;
    QT::QObject::connectImpl(v88, v4, &v89, v78, 0, v79, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v80 = qword_8CAF08;
    v90 = 0;
    v89 = sub_476130;
    v81 = operator new(0x10u);
    *(_DWORD *)v81 = 1;
    *(_QWORD *)(v81 + 8) = sub_1C46F0;
    QT::QObject::connectImpl(v88, v4, &v89, v80, 0, v81, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v82 = qword_8CAF08;
    v90 = 0;
    v89 = sub_4761D0;
    v83 = operator new(0x10u);
    *(_DWORD *)v83 = 1;
    *(_QWORD *)(v83 + 8) = sub_1C46B0;
    QT::QObject::connectImpl(v88, v4, &v89, v82, 0, v83, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v84 = qword_8CAF08;
    v90 = 0;
    v89 = sub_476260;
    v85 = operator new(0x10u);
    *(_DWORD *)v85 = 1;
    *(_QWORD *)(v85 + 8) = sub_1C4670;
    QT::QObject::connectImpl(v88, v4, &v89, v84, 0, v85, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
    v86 = qword_8CAF08;
    v90 = 0;
    v89 = sub_476340;
    v87 = operator new(0x10u);
    *(_DWORD *)v87 = 1;
    *(_QWORD *)(v87 + 8) = sub_1C4630;
    QT::QObject::connectImpl(v88, v4, &v89, v86, 0, v87, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v88);
  }
  return v91 - __readfsqword(0x28u);
}
