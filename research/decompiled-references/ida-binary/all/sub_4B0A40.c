__int64 __fastcall sub_4B0A40(int a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int8 *v9; // r9
  unsigned __int8 *v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rbx
  char v13; // al
  unsigned int v14; // ebx
  __int64 v16; // [rsp+0h] [rbp-98h]
  unsigned __int8 *v17; // [rsp+0h] [rbp-98h]
  __int64 v18; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v19; // [rsp+10h] [rbp-88h]
  __int64 v20; // [rsp+20h] [rbp-78h]
  unsigned __int64 v21; // [rsp+28h] [rbp-70h]
  char v22[8]; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  QT::QKeySequence::QKeySequence((QT::QKeySequence *)v22, a1 + a2, 0, 0, 0);
  QT::QKeySequence::toString(&ptr, v22, 1);
  v2 = qword_8D1C98;
  if ( qword_8D1C98 )
  {
    v3 = v25;
    v16 = v24;
    v4 = QT::qHash(v25, v24, *((_QWORD *)qword_8D1C98 + 3));
    v5 = v16;
    v20 = v2[4];
    v21 = v2[2];
    v6 = v4 & (v21 - 1);
    v7 = v6 & 0x7F;
    v8 = v20 + 144 * (v6 >> 7);
LABEL_3:
    v9 = (unsigned __int8 *)(v8 + 128);
LABEL_4:
    v10 = &v9[v7 - 128];
    while ( 1 )
    {
      v11 = *v10;
      if ( v11 == 255 )
        break;
      v12 = *(_QWORD *)v9 + 32 * v11;
      if ( v3 == *(_QWORD *)(v12 + 16) )
      {
        v19 = v9;
        v18 = v5;
        v17 = v10;
        v13 = QT::QtPrivate::equalStrings(v3, *(_QWORD *)(v12 + 8), v3, v5);
        v10 = v17;
        v5 = v18;
        v9 = v19;
        if ( v13 )
        {
          if ( !v12 )
            break;
          v14 = *(unsigned __int16 *)(v12 + 24);
          goto LABEL_11;
        }
      }
      if ( ++v10 == v9 )
      {
        v9 = v10 + 144;
        v7 = 0;
        if ( 0x8E38E38E38E38E39LL * ((__int64)&v10[-v20 + 16] >> 4) != v21 >> 7 )
          goto LABEL_4;
        v8 = v20;
        goto LABEL_3;
      }
    }
  }
  v14 = 0;
LABEL_11:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v22);
  return v14;
}
