/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7D40
// Address: 0x00000000000C7D40

//----- (00000000000C7D40) ----------------------------------------------------
void *__fastcall sub_C7D40(void *a1)
{
  pthread_mutex_t *v1; // rax
  int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = (pthread_mutex_t *)sub_C6650();
  if ( (unsigned int)sub_C5E00(v1, &v3, (unsigned int)a1, 0, -1) + 1 >= 2
    && (v3 & 0x7F) != 0
    && (((_BYTE)v3 + 1) & 0x7E) == 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1150);
    BUG();
  }
  return nullptr;
}
// 158B40: using guessed type __int64 under_debugger;
