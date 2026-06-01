// Alternative name is '_ZN11ClpInteriorD2Ev'
void __fastcall ClpInterior::~ClpInterior(ClpInterior *this)
{
  ClpInterior::gutsOfDelete(this);
  ClpModel::~ClpModel(this);
}

