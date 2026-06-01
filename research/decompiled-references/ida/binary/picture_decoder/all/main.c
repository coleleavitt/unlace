_BOOL8 __fastcall main(int a1, char **a2, char **a3)
{
  int *v4; // rsi
  size_t v5; // rcx
  ssize_t v6; // rax
  _BOOL4 v7; // [rsp+0h] [rbp-E8h]
  size_t v8; // [rsp+0h] [rbp-E8h]
  int v9[3]; // [rsp+Ch] [rbp-DCh] BYREF
  char buf; // [rsp+1Bh] [rbp-CDh] BYREF
  int v11; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v12[16]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-A8h] BYREF
  void *v15[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v16; // [rsp+70h] [rbp-78h]
  _QWORD v17[3]; // [rsp+80h] [rbp-68h] BYREF
  char v18; // [rsp+98h] [rbp-50h]
  unsigned __int64 v19; // [rsp+A8h] [rbp-40h]

  v9[0] = a1;
  v19 = __readfsqword(0x28u);
  sub_3F10(2, a2, a3);
  QT::QIODevice::QIODevice((QT::QIODevice *)v17);
  v17[0] = &off_69D0;
  v17[2] = 0x100000000LL;
  v18 = 0;
  QT::QCoreApplication::QCoreApplication((QT::QCoreApplication *)v12, v9, a2, 395266);
  QT::QByteArray::QByteArray((QT::QByteArray *)v15, nullptr, -1);
  QT::QImageReader::QImageReader((QT::QImageReader *)v13, (QT::QIODevice *)v17, (const QT::QByteArray *)v15);
  QT::QImageReader::read((QT::QImageReader *)v14);
  QT::QImageReader::~QImageReader((QT::QImageReader *)v13);
  sub_3B40(v15, v13);
  if ( (unsigned __int8)QT::QImage::isNull((QT::QImage *)v14) )
  {
    LOBYTE(v15[0]) = -14;
    j__write(1, v15, 1u);
    goto LABEL_3;
  }
  buf = -15;
  if ( j__write(1, &buf, 1u) != 1 )
  {
LABEL_3:
    v7 = 1;
    goto LABEL_4;
  }
  v16 = 0;
  *(_OWORD *)v15 = 0;
  QT::QBuffer::QBuffer();
  QT::QBuffer::open();
  v4 = (int *)v13;
  if ( (unsigned __int8)QT::QImage::save((QT::QImage *)v14, (QT::QIODevice *)v13, byte_5000, -1)
    && (v4 = &v11, v11 = v16, j__write(1, &v11, 4u) == 4) )
  {
    v5 = v11;
    if ( !v15[0] || *(int *)v15[0] > 1 )
    {
      v8 = v11;
      QT::QByteArray::reallocData();
      v5 = v8;
    }
    v4 = (int *)v15[1];
    v6 = j__write(1, v15[1], v5);
    v7 = v11 != v6;
  }
  else
  {
    v7 = 1;
  }
  QT::QBuffer::~QBuffer((QT::QBuffer *)v13);
  sub_3B40(v15, v4);
LABEL_4:
  QT::QImage::~QImage((QT::QImage *)v14);
  QT::QCoreApplication::~QCoreApplication((QT::QCoreApplication *)v12);
  v17[0] = &off_69D0;
  QT::QIODevice::~QIODevice((QT::QIODevice *)v17);
  return v7;
}

