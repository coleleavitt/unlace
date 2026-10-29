unsigned __int64 __fastcall sub_2B1E50(__int64 *a1, __int64 *a2)
{
  QT::QAbstractScrollArea *v3; // rdi
  void (*v4)(); // rax
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+10h] [rbp-38h] BYREF
  int v9; // [rsp+18h] [rbp-30h]
  int v10; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_2B23B0();
  if ( a2 )
  {
    sub_1EAF30((_QWORD *)a1[2], a2[1]);
    v3 = (QT::QAbstractScrollArea *)a1[2];
    v4 = *(void (**)())(*a1 + 376);
    if ( v4 != nullsub_37 )
    {
      ((void (__fastcall *)(__int64 *, _QWORD))v4)(a1, *((_QWORD *)v3 + 91));
      v3 = (QT::QAbstractScrollArea *)a1[2];
    }
    v9 = -1;
    v7[0] = user_graph_place_t___vtable;
    v8 = user_graph_place_t___vtable;
    v5 = a2[3];
    v7[1] = 0;
    if ( v5 )
    {
      v10 = v5 - 1;
      LODWORD(v5) = *(_QWORD *)(a2[2] + 24 * v5 - 16) - 1;
    }
    else
    {
      v10 = 0;
    }
    v9 = v5;
    sub_1EB140(v3, (const char *)v7, (__int64)&v8);
    sub_174FE0(a1);
  }
  return v11 - __readfsqword(0x28u);
}
