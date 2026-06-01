__int64 sub_3F0210()
{
  __int64 std_dirtree; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax

  std_dirtree = get_std_dirtree(0);
  *(_DWORD *)(sub_75A500(std_dirtree) + 152) = -1;
  v1 = get_std_dirtree(1);
  *(_DWORD *)(sub_75A500(v1) + 152) = -1;
  v2 = get_std_dirtree(2);
  *(_DWORD *)(sub_75A500(v2) + 152) = -1;
  v3 = get_std_dirtree(3);
  *(_DWORD *)(sub_75A500(v3) + 152) = -1;
  v4 = get_std_dirtree(4);
  *(_DWORD *)(sub_75A500(v4) + 152) = -1;
  v5 = get_std_dirtree(5);
  result = sub_75A500(v5);
  *(_DWORD *)(result + 152) = -1;
  return result;
}

