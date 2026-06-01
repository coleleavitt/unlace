unsigned __int64 __fastcall sub_391E30(
        __int64 a1,
        QT::QTreeWidgetItem *(__fastcall ***a2)(__int64 a1, __int64 a2, const char **a3, QT::QTreeWidgetItem *a4),
        unsigned __int8 a3,
        _QWORD *a4,
        signed int a5,
        QT::QTreeWidgetItem *a6)
{
  char tinfo_property; // al
  __int64 v9; // rdi
  const char *v10; // rsi
  bool v11; // r13
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  __int64 tinfo_property4; // rax
  size_t v15; // r12
  __int64 v16; // r13
  void *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  double v20; // xmm0_8
  QT::QTreeWidgetItem *(__fastcall *v21)(__int64, __int64, const char **, QT::QTreeWidgetItem *); // r13
  const char *v22; // r14
  unsigned __int64 v23; // rdx
  size_t v24; // rax
  const char *v25; // r12
  QT::QTreeWidgetItem *v26; // r12
  const char *v27; // r13
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rbp
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v35; // r14
  __int64 v36; // rax
  double v37; // xmm0_8
  QT::QTreeWidgetItem *(__fastcall *v38)(__int64, __int64, const char **, QT::QTreeWidgetItem *); // r13
  const char *v39; // r14
  unsigned __int64 v40; // rdx
  size_t v41; // rax
  const char *v42; // r12
  const char *v43; // r12
  char v48; // [rsp+20h] [rbp-108h]
  unsigned int v49; // [rsp+20h] [rbp-108h]
  __int64 v50; // [rsp+20h] [rbp-108h]
  char v51; // [rsp+2Bh] [rbp-FDh]
  unsigned int v52; // [rsp+2Ch] [rbp-FCh]
  __int64 v53; // [rsp+30h] [rbp-F8h]
  char v54; // [rsp+3Bh] [rbp-EDh]
  signed int v55; // [rsp+3Ch] [rbp-ECh]
  __int64 tinfo_tid; // [rsp+40h] [rbp-E8h]
  __int64 v57; // [rsp+40h] [rbp-E8h]
  const char *v58; // [rsp+58h] [rbp-D0h] BYREF
  const char *v59; // [rsp+60h] [rbp-C8h] BYREF
  const char *v60; // [rsp+68h] [rbp-C0h] BYREF
  void *v61; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+78h] [rbp-B0h]
  void *ptr[4]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v65; // [rsp+B8h] [rbp-70h]
  __int128 v66; // [rsp+C8h] [rbp-60h]
  __int64 v67; // [rsp+D8h] [rbp-50h]
  int v68; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v69; // [rsp+E8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a4, 2) & 0x2F) == 0xD )
  {
    tinfo_property = get_tinfo_property(*a4, 2);
    v9 = *a4;
    v10 = byte_9 + 4;
    v64 = 0;
    v51 = tinfo_property & 0x3F;
    v11 = (tinfo_property & 0x3F) == 29;
    v67 = 0;
    v68 = 1;
    v65 = 0;
    v66 = 0;
    get_tinfo_details(v9, 13, &v64);
    if ( !(_QWORD)v65 )
    {
      v29 = v64;
      if ( !v64 )
        return v69 - __readfsqword(0x28u);
      goto LABEL_40;
    }
    v12 = 0;
    v52 = a3;
    v54 = v11 | a3 ^ 1;
    do
    {
      v13 = v64 + 144 * v12;
      tinfo_property4 = get_tinfo_property4(*a4, 297, v12, 0, 0, 0);
      v15 = *(_QWORD *)(v13 + 24);
      v16 = tinfo_property4;
      v17 = nullptr;
      if ( v15 )
      {
        v17 = (void *)qalloc_or_throw(*(_QWORD *)(v13 + 24));
        memcpy(v17, *(const void **)(v13 + 16), v15);
      }
      v10 = (_BYTE *)(&dword_0 + 2);
      if ( (get_tinfo_property(*(_QWORD *)(v13 + 64), 2) & 0x2F) == 0xD )
      {
        v10 = (const char *)(v13 + 64);
        v53 = v13 + 64;
        v48 = sub_38E3F0(a1, (_QWORD *)(v13 + 64), v52);
        if ( v54 || v48 )
        {
          if ( v51 == 29 )
            v55 = a5;
          else
            v55 = a5 + (*(_QWORD *)v13 >> 3);
          v18 = operator new(0x40u);
          tinfo_tid = get_tinfo_tid(v53, 0);
          v19 = get_tinfo_tid(a4, 0);
          sub_38A930(v18, v55, v19, tinfo_tid, v16);
          v20 = 0.0;
          v21 = **a2;
          v58 = (const char *)v18;
          v61 = nullptr;
          v62 = 0;
          if ( v15 )
          {
            v61 = (void *)qalloc_or_throw(v15);
            *((_QWORD *)&v62 + 1) = v15;
            memcpy(v61, v17, v15);
            *(_QWORD *)&v62 = v15;
          }
          if ( v21 == TStructureOffsetsForm::load_register_paths )
          {
            v22 = v58;
            v58 = nullptr;
            v57 = (__int64)a2[1];
            if ( (_QWORD)v62 )
            {
              v24 = v62 - 1;
              v25 = (const char *)v61;
              v23 = (unsigned __int64)(v62 - 1) >> 63;
            }
            else
            {
              LOBYTE(v23) = 0;
              v24 = 0;
              v25 = &s1;
            }
            if ( !v25 || (_BYTE)v23 )
            {
              v24 = 0;
              if ( v25 )
                v24 = strlen(v25);
            }
            v20 = QT::QString::fromUtf8(ptr, v24, v25);
            v10 = (const char *)a6;
            v59 = v22;
            v26 = sub_391B50(v57, a6, (const QT::QString *)ptr, &v59);
            v27 = v59;
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
            if ( v27 )
              (*(void (__fastcall **)(const char *, double))(*(_QWORD *)v27 + 8LL))(v27, v20);
          }
          else
          {
            v10 = (const char *)&v61;
            v26 = v21((__int64)a2, (__int64)&v61, &v58, a6);
          }
          if ( v61 )
          {
            *(_QWORD *)&v62 = 0;
            v20 = qfree(v61, v10, v20);
          }
          if ( v58 )
            (*(void (__fastcall **)(const char *, double))(*(_QWORD *)v58 + 8LL))(v58, v20);
          if ( v48 )
          {
            v10 = (const char *)a2;
            sub_391E30(a1, a2, v52, v53, v55, v26, v20);
          }
        }
      }
      else if ( v51 == 29 )
      {
        v49 = (*(_QWORD *)v13 >> 3) + a5;
        v35 = operator new(0x40u);
        v36 = get_tinfo_tid(a4, 0);
        sub_38A930(v35, v49, v36, -1, v16);
        v37 = 0.0;
        v38 = **a2;
        v58 = (const char *)v35;
        v61 = nullptr;
        v62 = 0;
        if ( v15 )
        {
          v61 = (void *)qalloc_or_throw(v15);
          *((_QWORD *)&v62 + 1) = v15;
          memcpy(v61, v17, v15);
          *(_QWORD *)&v62 = v15;
        }
        if ( v38 == TStructureOffsetsForm::load_register_paths )
        {
          v39 = v58;
          v58 = nullptr;
          v50 = (__int64)a2[1];
          if ( (_QWORD)v62 )
          {
            v41 = v62 - 1;
            v42 = (const char *)v61;
            v40 = (unsigned __int64)(v62 - 1) >> 63;
          }
          else
          {
            LOBYTE(v40) = 0;
            v41 = 0;
            v42 = &s1;
          }
          if ( !v42 || (_BYTE)v40 )
          {
            v41 = 0;
            if ( v42 )
              v41 = strlen(v42);
          }
          v37 = QT::QString::fromUtf8(ptr, v41, v42);
          v10 = (const char *)a6;
          v60 = v39;
          sub_391B50(v50, a6, (const QT::QString *)ptr, &v60);
          v43 = v60;
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( v43 )
            (*(void (__fastcall **)(const char *, double))(*(_QWORD *)v43 + 8LL))(v43, v37);
        }
        else
        {
          v10 = (const char *)&v61;
          v38((__int64)a2, (__int64)&v61, &v58, a6);
        }
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          v37 = qfree(v61, v10, v37);
        }
        if ( v58 )
          (*(void (__fastcall **)(const char *, double))(*(_QWORD *)v58 + 8LL))(v58, v37);
      }
      if ( v17 )
        qfree(v17, v10);
      v28 = v65;
      ++v12;
    }
    while ( v12 < (unsigned __int64)v65 );
    v29 = v64;
    if ( v64 )
    {
      if ( (_QWORD)v65 )
      {
        v30 = 0;
        do
        {
          v31 = (_QWORD *)(v29 + 144 * v30);
          clear_tinfo_t(v31 + 8);
          v32 = v31[5];
          if ( v32 )
          {
            v31[6] = 0;
            qfree(v32, v10);
          }
          v33 = v31[2];
          if ( v33 )
          {
            v31[3] = 0;
            qfree(v33, v10);
          }
          ++v30;
          v29 = v64;
        }
        while ( v28 != v30 );
      }
LABEL_40:
      *(_QWORD *)&v65 = 0;
      qfree(v29, v10);
    }
  }
  return v69 - __readfsqword(0x28u);
}
