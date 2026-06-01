__int64 __fastcall ClpNode::cleanUpForCrunch(ClpNode *this)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  *((_QWORD *)this + 6) = 0;
  return result;
}

