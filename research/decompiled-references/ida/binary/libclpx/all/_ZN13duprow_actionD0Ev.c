// attributes: thunk
void __fastcall duprow_action::~duprow_action(duprow_action *this)
{
  operator delete(this);
}

