void __fastcall sub_4E7780(__int64 a1)
{
  if ( qword_2CCBF88 )
    qmutex_lock(qword_2CCBF88);
  sub_4E76E0(a1);
  if ( qword_2CCBF88 )
    qmutex_unlock(qword_2CCBF88);
}
