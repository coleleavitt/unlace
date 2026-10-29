__int64 __fastcall sub_2233750(_QWORD *a1, __int64 a2)
{
  __int64 addr; // rbx
  int v3; // ebp
  __int64 result; // rax
  char *v5; // rax

  *a1 = &unk_2C75CB8;
  addr = __tls_get_addr(&stru_2C77838);
  *(_QWORD *)(addr + 296) = a1[1];
  v3 = dword_2C8F608;
  result = *(unsigned int *)(addr + 288);
  if ( dword_2C8F608 != (_DWORD)result )
  {
    if ( (_DWORD)result )
    {
      v5 = (char *)sub_227D6D0(&stru_2C77838, a2);
      result = sub_22335B0(v5);
      *(_DWORD *)(addr + 288) = v3;
    }
  }
  return result;
}
