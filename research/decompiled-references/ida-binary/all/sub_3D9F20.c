void __fastcall watchview_t__::vfunc_3(QT::QAbstractScrollArea *this, const char *a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  *(_QWORD *)this = &watchview_t___vtable;
  *((_QWORD *)this + 2) = watchview_t___vtable_at__16;
  *((_QWORD *)this + 5) = watchview_t___vtable_at__40;
  *((_QWORD *)this + 13) = watchview_t___vtable_at__104;
  if ( (unsigned __int8)netnode_inited(a3) )
  {
    v8 = *(_QWORD *)(sub_1EA680((__int64)this + 384, (__int64)a2, v4, v5, a3) + 40);
    if ( v8 )
    {
      a2 = (const char *)v9;
      v9[0] = *(unsigned int *)(v8 + 12);
      netnode_set(qword_8D0C88, v9, 8);
    }
  }
  v6 = *((__int64 **)this + 91);
  qword_8D0C80 = nullptr;
  if ( v6 )
  {
    v7 = *v6;
    if ( *v6 )
    {
      v6[1] = 0;
      a3 = qfree(v7, a2);
    }
    qfree(v6, a2, a3);
  }
  dword_8BDE64 = -1;
  CustomIDAMemo__::vfunc_3(this, a2);
}
