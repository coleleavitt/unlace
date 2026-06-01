ClpInterior *__fastcall ClpInterior::operator=(ClpInterior *this, ClpInterior *a2)
{
  if ( this != a2 )
  {
    ClpInterior::gutsOfDelete(this);
    ClpModel::operator=(this, a2);
    ClpInterior::gutsOfCopy(this, a2);
  }
  return this;
}

