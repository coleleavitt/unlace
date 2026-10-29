__int64 __fastcall get_next_fcref_to(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v6; // [rsp+0h] [rbp-18h] BYREF
  char v7; // [rsp+4h] [rbp-14h]
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v2 = a1;
  v6 = a2;
  v3 = qword_2CA1698;
  v4 = *(_QWORD *)(qword_2CA1698 + 1480);
  v7 = *(_BYTE *)(v4 + 2232);
  sub_3DD2D0((_QWORD *)v4, &v6, v2);
  result = v6;
  if ( v6 != -1 )
    *(_BYTE *)(*(_QWORD *)(v3 + 1480) + 2232LL) = v7;
  return result;
}

