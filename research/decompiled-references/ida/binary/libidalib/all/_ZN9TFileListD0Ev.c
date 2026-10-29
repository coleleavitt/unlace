void __fastcall TFileList::~TFileList(TFileList *this)
{
  TFileList::~TFileList(this);
  operator delete(this, 0x80u);
}

