__int64 __fastcall get_first_dref_to(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  unsigned int v3; // [rsp+0h] [rbp-18h] BYREF
  char v4; // [rsp+4h] [rbp-14h]
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v3 = -1;
  v1 = qword_2CA1698;
  v4 = 0;
  sub_3FD660(*(_QWORD **)(qword_2CA1698 + 1480), (__int64)&v3, a1);
  result = v3;
  if ( v3 != -1 )
    *(_BYTE *)(*(_QWORD *)(v1 + 1480) + 2232LL) = v4;
  return result;
}

