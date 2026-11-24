v_add_co_u32 v0, s2, v1, v2
v_sub_co_u32 v0, s2, v1, v2
v_subrev_co_u32 v0, s2, v1, v2
v_permlane16_b32 v0, v1, s2, s3
v_permlanex16_b32 v0, v1, s2, s3
v_permlane16_b32 v0, v1, s2, s3 op_sel:[1,1]
global_store_dword v[4:5], v0, off
s_endpgm
